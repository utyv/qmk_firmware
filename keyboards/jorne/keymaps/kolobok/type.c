#include QMK_KEYBOARD_H
#include "type.h"
#include "keycodes.h"

enum search_state {
	CHK_CHORD_ST,
	PRNT_ST,
	SKP_WRD_ST,
	END_ST
};

bool type_word(const uint8_t *dict, bool caps_first) {

	bool is_first = true;
	uint8_t dict_key = 0;
	
	while (true) {
		dict_key = pgm_read_byte_near(dict);
		if (dict_key == NC) {
			// next word
			return false;
		} else if (dict_key == SFG) {
			// shift guard
			if (!(is_chorde_shift())) {
				return true;
			} else {
				caps_first = false;
			}
		} else if (dict_key == SFN) {
			shift_on();
			caps_first = false;
		} else if (dict_key == SFF) {
			shift_off();
			caps_first = false;
		// } else if (dict_key == CLN) {
		// 	ctl_on();
		// 	caps_first = false;
		// } else if (dict_key == CLF) {
		// ctl_off();
		// caps_first = false;
		// } else if (dict_key == ALN) {
		// 	alt_on();
		// 	caps_first = false;
		// } else if (dict_key == ALF) {
		// 	alt_off();
		// 	caps_first = false;
		// } else if (dict_key == ALH) {
		// 	if (is_layer()) {
		// 	alt_hold = true;
		// 	}
		// 	caps_first = false;
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
	}
	
	return true;
}

void type_chorde16(uint16_t chorde, const uint8_t *dict, bool caps_first) {
	
	uint8_t chorde_0 = (uint8_t) chorde;
	uint8_t chorde_1 = (uint8_t) (chorde >> 8);
	
	uint8_t state = CHK_CHORD_ST;
	uint8_t dict_0 = 0;
	uint8_t dict_1 = 0;
	uint8_t dict_key = 0;
	
	while (true) {
		switch (state) {
			case CHK_CHORD_ST:
				// check chorde state
				dict_0 = pgm_read_byte_near(dict);
				dict_1 = pgm_read_byte_near(dict+1);

				if (dict_0 == 0x00 && dict_1 == 0x00) {
					// end of dict
					state = END_ST;
				} else if (dict_0 == chorde_0 && dict_1 == chorde_1) {
					// print word
					state = PRNT_ST;
					dict += 2;
				} else {
					// skip word
					state = SKP_WRD_ST;
					dict += 2;
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
				
		}
				
		if (state == PRNT_ST) {
			if (type_word(dict, caps_first)) {
				state = SKP_WRD_ST;
			} else {
				state = END_ST;
			}
		}
			
		if (state == END_ST) {
			break;
		}
				
	}
}

