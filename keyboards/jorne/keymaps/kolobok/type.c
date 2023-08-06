#include QMK_KEYBOARD_H
#include "type.h"
#include "keycodes.h"

enum search_state {
	CHK_CHORD_ST,
	PRNT_ST,
	SKP_WRD_ST,
	END_ST
};

enum {undo_size = 8};

uint8_t undo_history [undo_size];
uint8_t undo_count = 0;

uint8_t type_word(const uint8_t *dict, bool caps_first) {

	bool is_first = true;
	uint8_t dict_key = 0;
	uint8_t type_count = 0;
	bool is_altcode = false;
	
	while (true) {
		dict_key = pgm_read_byte_near(dict);
		if (dict_key == NC) {
			// next word
			return type_count;
		} else if (dict_key == SFG) {
			// shift guard
			if (!(is_chorde_shift())) {
				return type_count;
			} else {
				caps_first = false;
			}
		} else if (dict_key == SFN) {
			shift_on();
			caps_first = false;
		} else if (dict_key == SFF) {
			shift_off();
			caps_first = false;
		} else if (dict_key == CLN) {
			ctl_on();
		 	caps_first = false;
			clear_undo_history();
		} else if (dict_key == CLF) {
			ctl_off();
			caps_first = false;
		} else if (dict_key == ALN) {
		 	alt_on();
		 	caps_first = false;
			is_altcode = true;
			++type_count;
		} else if (dict_key == ALF) {
		 	alt_off();
		 	caps_first = false;
		} else if (dict_key == ALH) {
		 	alt_hold();
		 	caps_first = false;
		} else if (dict_key == UND) {
			undo();
		} else {
			if (caps_first && is_first) {
				shift_on();
				tap_code(dict_key);
				shift_off();
			} else {
				tap_code(dict_key);
			}
			is_first = false;
			if (!is_altcode) {
				++type_count;
			}
			if (dict_key == KC_BSPC) {
				clear_undo_history();
				type_count = 0;
			}
		}
		dict++;
	}
	
	return type_count;
}

const uint8_t *find_word16(uint16_t chorde, const uint8_t *dict) {
    
	const uint8_t *result = 0;
	
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
					result = dict;
					
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
			case PRNT_ST:
				// print word
				dict_key = pgm_read_byte_near(dict);
				if (dict_key == NC) {
					// next word
					state = END_ST;
				} else if (dict_key == SFG) {
					// shift guard
					if (!(is_chorde_shift())) {
						state = SKP_WRD_ST;
						result = 0;
					}
				}
				dict++;
			break;
			
				
		}
				
		if (state == END_ST) {
			break;
		}
				
	}
	
	return result;
	
}	

void add_undo(uint8_t type_count) {

	if (!type_count) {
		return;
	}
	
	if (undo_count == undo_size) {
		for (uint8_t i = 0; i<undo_size-1; ++i) {
			undo_history[i] = undo_history[i+1];
		}
		--undo_count;
	}
	
	undo_history[undo_count] = type_count;
	++undo_count;

}

void undo(void) {

	if (undo_count) {
		
		for (uint8_t i = 0; i<undo_history[undo_count-1]; ++i) {
			tap_code(KC_BSPC);
		}
		--undo_count;
		
	} else {
		
		ctl_on();
		tap_code(KC_BSPC);
		
	}
	
}

void clear_undo_history(void) {
	undo_count = 0;
}
