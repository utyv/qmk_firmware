#include "chordes.h"

enum search_state {
	CHK_CHORD_ST,
	PRNT_ST,
	SKP_WRD_ST,
	SKP_DNC_ST,
	END_ST
};

uint32_t chord = 0;
uint8_t chord_counter = 0;
bool is_chord_shift = false;

bool process_chorde(uint16_t keycode, bool pressed) {

	if (!(keycode >= AL_0 && keycode <= BR_7)) {
		return true;
	}
	
	if (pressed) {
		++chord_counter;
		chord |= (1ul << (keycode - AL_0));
			
		if (is_shift()) {
			is_chord_shift = true;
		}
		
	} else {
		
		--chord_counter;
		
		if (!chord_counter) {
			bool is_short = (chord < 0x10000);
			
			const uint8_t *dict = 0;
			
			if (is_short) {
				dict = alpha_dict;
			} else {
				if (is_shift()) {
					dict = beta_s_dict;
				} else {
					dict = beta_dict;

				}
			}
			
			uint8_t chord_0 = (uint8_t) chord;
			uint8_t chord_1 = (uint8_t) (chord >> 8);
			uint8_t chord_2 = (uint8_t) (chord >> 16);
			uint8_t chord_3 = (uint8_t) (chord >> 24);

			uint8_t state = 0;
			uint8_t dict_0 = 0;
			uint8_t dict_1 = 0;
			uint8_t dict_2 = 0;
			uint8_t dict_3 = 0;
			
			uint8_t dict_key = 0;
			bool caps_first = is_short && is_chord_shift && (!is_shift());
			bool is_first = true;
			uint8_t dance_count = 0;
		
			while (true) {
				switch (state) {
				case CHK_CHORD_ST:
					dict_0 = pgm_read_byte_near(dict);
					dict_1 = pgm_read_byte_near(dict+1);
					if (!is_short) {
						dict_2 = pgm_read_byte_near(dict+2);
						dict_3 = pgm_read_byte_near(dict+3);
					}	

					if (dict_0 == 0x00 && dict_1 == 0x00 
							&& dict_2 == 0x00 && dict_3 == 0x00
						) {
						state = END_ST;
					} else if (dict_0 == chord_0 && dict_1 == chord_1 
							&& dict_2 == chord_2 && dict_3 == chord_3
						) {
						dance_count = check_dance(chord);
						if (dance_count) {
							state = SKP_DNC_ST;
						} else {
							state = PRNT_ST;
						}
						dict += (is_short ? 2 : 4);
					} else {
						state = SKP_WRD_ST;
						dict += (is_short ? 2 : 4);
					}
				break;
				case SKP_WRD_ST:
					dict_key = pgm_read_byte_near(dict);
					if (dict_key == NC) {
						state = CHK_CHORD_ST;
					}
					dict++;
				break;
				case PRNT_ST:
					dict_key = pgm_read_byte_near(dict);
					if (dict_key == NC) {
						state = END_ST;
					} else if (!is_short && dict_key == SFN) {
						shift_on();
					} else if (!is_short && dict_key == SFF) {
						shift_off();
					//} else if (dict_key == CLN) {
					//	ctl_on();
					//} else if (dict_key == CLF) {
					//	ctl_off();
					} else if (!is_short && dict_key == ALN) {
						alt_on();
					} else if (!is_short && dict_key == ALF) {
						alt_off();
					} else if (!is_short && dict_key == TD) {
						start_dance(chord);
						state = END_ST;
					} else {
						if (caps_first && is_first) {
							shift_on();
							tap_code(dict_key);
							shift_off();
						} else {
							tap_code(dict_key);
						}
						is_first = false;
					}
					dict++;
				break;
				case SKP_DNC_ST:
					dict_key = pgm_read_byte_near(dict);
					if (dict_key == NC) {
						state = CHK_CHORD_ST;
					} else if (dict_key == TD) {
						dance_count--;
						if (!dance_count) {
							state = PRNT_ST;
						}
					}
					dict++;
				
				break;
				
				}
				
				if (state == END_ST) {
					break;
				}
				//if (i > 0xfffd) {
				//	break;
				//}
			}
			
			reset_mods();
			
			chord = 0;
			is_chord_shift = false;

		}
	}
		
	return false;
}