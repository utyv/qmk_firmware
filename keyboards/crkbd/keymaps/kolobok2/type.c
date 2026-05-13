#include QMK_KEYBOARD_H
#include "type.h"
#include "keycodes.h"
#include "multitap.h"


enum search_state {
	CHK_CHORD_ST,
	PRNT_ST,
	SKP_WRD_ST,
	END_ST
};

enum {undo_size = 8};

uint8_t undo_history [undo_size];
uint8_t undo_count = 0;

uint8_t type_word(const uint8_t *pdict, uint8_t sa) { // sa means 'shiht action'

	bool is_first = true;
	uint8_t dict_key = 0;
	bool skip_count = false;
	uint8_t type_count = 0;
	const uint8_t *to_save = pdict;
	bool is_cmd = false;

	while (true) {
		dict_key = pgm_read_byte_near(pdict);
				
		if (is_cmd) {
			if (dict_key == ALH) {
				alt_hold();
			} else if (dict_key == UND) {
				undo();
			} else if (dict_key == LSW) {
				swap_lang();
			} else if (dict_key == MTS) {
				start_multitap();
				to_save = 0;
			} else if (dict_key == ENG) {
				set_lang(LANG_EN);
			} else if (dict_key == RUS) {
				set_lang(LANG_RU);
			} else if (dict_key == CPS) {
				// WinCompose
				tap_code(KC_RALT);
				type_count++;
				skip_count = true;
			}
			is_cmd = false;
		} else if (dict_key == NC) {
			// next word
			break;
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
		} else if (dict_key == WNN) {
			win_on();
		} else if (dict_key == WNF) {
			win_off();
		} else if (dict_key == CMD) {
			is_cmd = true;
		} else {
			bool supress = false;
			if (sa == SA_SUPRESS_ALL) {
				supress = true;
			} else if (sa == SA_SUPRESS_2 && !is_first) {
				supress = true;
			}
			if (supress) {
				shift_off();
			} 
			tap_code(dict_key);
			if (sa == SA_SUPRESS_2 && is_first) {
				supress_shift_alpha();
			}
			is_first = false;
			
			if (!skip_count) {
				++type_count;
			}
			if (
				dict_key == KC_BSPC
				|| dict_key == KC_ENT
				|| dict_key == KC_DEL
				|| dict_key == KC_ESC
			) {
				type_count = 0;
			}
		}
		pdict++;
		
	}
	
	if (to_save) {
		set_multitap_chorde(to_save);
	}
	
	return type_count;
}

void find_word(uint64_t *chordes, const uint8_t **found, uint8_t search_sz) {
    
	const uint8_t *pdict = dict;
	uint8_t state = CHK_CHORD_ST;
	uint8_t dict0 = 0;
	uint8_t dict1 = 0;
	uint8_t dict2 = 0;
	uint8_t dict3 = 0;
	uint8_t dict4 = 0;
	uint8_t dict5 = 0;
	uint8_t dict_key = 0;
	
	while (true) {
		switch (state) {
			case CHK_CHORD_ST:
				// check chorde state
				dict0 = pgm_read_byte_near(pdict);
				dict1 = pgm_read_byte_near(pdict+1);
				dict2 = pgm_read_byte_near(pdict+2);
				dict3 = pgm_read_byte_near(pdict+3);
				dict4 = pgm_read_byte_near(pdict+4);
				dict5 = pgm_read_byte_near(pdict+5);
				uint64_t chorde = ((uint64_t) dict0) | (((uint64_t) dict1) << 8) | (((uint64_t) dict2) << 16) | (((uint64_t) dict3) << 24) | (((uint64_t) dict4) << 32) | (((uint64_t) dict5) << 40);

				pdict += 6;

				if (!chorde) {
					// end of dict
					state = END_ST;
				} else {
					// skip word
					state = SKP_WRD_ST;
					bool over = true;
					for (uint8_t i = 0; i < search_sz; ++i) {
						if (chordes[i] && (chordes[i] == chorde)) {
							found[i] = pdict;
						}
						if (chordes[i] && !found[i]) {
							over = false;
						}
					}
					if (over) {
						state = END_ST;
					}
				}	
		
			break;
			case SKP_WRD_ST:
				// skip word
				dict_key = pgm_read_byte_near(pdict);
				if (dict_key == NC) {
					// next chord
					state = CHK_CHORD_ST;
				}
				pdict++;
			break;
				
		}
				
		if (state == END_ST) {
			break;
		}
				
	}
	
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