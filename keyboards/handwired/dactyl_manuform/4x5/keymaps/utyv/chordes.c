#include "chordes.h"

enum search_state {
	CHK_CHORD_ST,
	PRNT_ST,
	SKP_WRD_ST,
	END_ST
};

uint32_t chord = 0;
uint8_t chord_counter = 0;
bool is_chord_shift = false;

void check_multitap(bool pressed) {
	
	//if (is_multitap()) {
	//	stop_multitap();
	//}
	
	if (pressed) {
		
		switch (chord) {
			case BM(BL_2):
			case BM(BR_2):
				start_multitap(KC_DEL);
			break;
		}
		
	} else {
		
	}
	
}
		
bool process_chorde(uint16_t keycode, bool pressed) {

	if (keycode == LRL || keycode == LRR) {
		check_multitap(pressed);
	}
		
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
			
			if (is_multitap()) {
				stop_multitap();
				return false;
			}
	
			bool is_short = false;
			
			const uint8_t *dict = 0;
			
			if (is_layer()) {
				dict = layer_dict;
			} else {
				is_short = (chord < 0x10000);
				if (is_short) {
					if (is_phonetic()) {
						dict = phonetic_dict;
					} else {
						dict = short_dict;
					}
				} else {
					dict = long_dict;
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
		
			while (true) {
				switch (state) {
				case CHK_CHORD_ST:
					// check chorde state
					dict_0 = pgm_read_byte_near(dict);
					dict_1 = pgm_read_byte_near(dict+1);
					if (!is_short) {
						dict_2 = pgm_read_byte_near(dict+2);
						dict_3 = pgm_read_byte_near(dict+3);
					}	

					if (dict_0 == 0x00 && dict_1 == 0x00 
							&& dict_2 == 0x00 && dict_3 == 0x00
						) {
						// end of dict
						state = END_ST;
					} else if (dict_0 == chord_0 && dict_1 == chord_1 
							&& dict_2 == chord_2 && dict_3 == chord_3
						) {
						// print word
						state = PRNT_ST;
						dict += (is_short ? 2 : 4);
					} else {
						// skip word
						state = SKP_WRD_ST;
						dict += (is_short ? 2 : 4);
					}
				break;
				case SKP_WRD_ST:
					// skip word
					dict_key = pgm_read_byte_near(dict);
					if (dict_key == NC) {
						// next chord
						state = CHK_CHORD_ST;
					}
					dict++;
				break;
				case PRNT_ST:
					// print word
					dict_key = pgm_read_byte_near(dict);
					if (dict_key == NC) {
						// next word
						state = END_ST;
					} else if (dict_key == MCR) {
						process_macro(chord);
					} else if (dict_key == SFG) {
						// shift guard
						if (!is_shift()) {
							// skip word
							state = SKP_WRD_ST;
						} else {
							caps_first = false;
						}
					} else if (dict_key == SFN) {
						shift_on();
					} else if (dict_key == SFF) {
						shift_off();
					} else if (dict_key == CLN) {
						ctl_on();
					} else if (dict_key == CLF) {
						ctl_off();
					} else if (dict_key == ALN) {
						alt_on();
					} else if (dict_key == ALF) {
						alt_off();
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
				
				}
				
				if (state == END_ST) {
					break;
				}
				
			}
			
			reset_mods();
			
			chord = 0;
			is_chord_shift = false;

		}
	}
		
	return false;
}