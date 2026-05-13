#include "chordes.h"
#include "keycodes.h"
#include "mods.h"
#include "type.h"
#include "dict.h"
#include "multitap.h"

uint64_t chorde = 0;
uint8_t chorde_counter = 0;

enum chorde_type {
	CHORDE_COMMAND = 1,
	CHORDE_SYMBOL = 2,
	CHORDE_ALPHA = 3
};

bool is_chorde(void) {
	return chorde_counter;
}

uint64_t get_bit(uint16_t keycode) {

	return 1ULL << (keycode - SAFE_RANGE);
}


bool process_chorde(uint16_t keycode, bool pressed) {
	
	if (keycode == CC_L31 || keycode == CC_L32 || keycode == CC_L33) {
		// mod keys
		return true;
	}
		
	const uint64_t bit = get_bit(keycode);
	
	if (pressed) {
		++chorde_counter;
		chorde |= bit;
		set_chorde_mods();
	} else {
		--chorde_counter;
		if (!chorde_counter) {
			
			// find entries in the dict
			const uint8_t search_sz = 8;
			uint64_t search_chordes[search_sz];
			const uint8_t *found_entries[search_sz];
			for (uint8_t i = 0; i < search_sz; ++i) {
				search_chordes[i] = 0;
				found_entries[i] = 0;
			}
			
			const uint64_t ctl_bit = is_ctl() ? K_L31 : 0;
			const uint64_t shift_bit = is_shift() ? K_SFN : K_SFF;
			
			const uint8_t i_command = 0;
			const uint8_t i_sym0 = 1;
			const uint8_t i_sym1 = 2;
			const uint8_t i_sym2 = 3;
			const uint8_t i_alp1 = 4;
			const uint8_t i_alp2 = 5;
			const uint8_t i_combo = 6;
			const uint8_t i_acombo = 7;

			uint64_t chorde0 = (chorde & THUMB_MASK);
			uint64_t chorde1 = (chorde & LEFT_MASK);
			uint64_t chorde2 = (chorde & RIGHT_MASK);
			
			search_chordes[i_command] = chorde | K_CMD | ctl_bit | shift_bit;			
			
			if (!is_ctl()) {

				const uint8_t lang = get_lang();
				uint64_t lang_bit = 0;
				switch (lang) {
					case LANG_RU:
						lang_bit = K_RUS;
					break;
					case LANG_EN:
						lang_bit = K_ENG;
					break;
				}
				
				search_chordes[i_sym0] = chorde0 | shift_bit | lang_bit;
				search_chordes[i_sym1] = chorde1 | shift_bit | lang_bit;
				search_chordes[i_sym2] = chorde2 | shift_bit | lang_bit;
				search_chordes[i_alp1] = chorde1 | lang_bit;
				search_chordes[i_alp2] = chorde2 | lang_bit;
				search_chordes[i_combo] = chorde | shift_bit | lang_bit;
				if (chorde1 && chorde2) {
					search_chordes[i_acombo] = chorde1 | chorde2 | lang_bit;
				}
				
			}
			
			find_word(search_chordes, found_entries, search_sz);
			
			// determine up to 3 entries and the type of the chorde
			uint8_t ctype = 0;
				
			const uint8_t *pdict0 = 0;
			const uint8_t *pdict1 = 0;
			const uint8_t *pdict2 = 0;

			bool is_error = false;
			
			if (found_entries[i_command]) {
				ctype = CHORDE_COMMAND;
				pdict0 = found_entries[i_command];
			} else {
				if (chorde0) {
					if (found_entries[i_sym0]) {
						ctype = CHORDE_SYMBOL;
						pdict0 = found_entries[i_sym0];
					}
					if (!pdict0) {
						is_error = true;
					}
				}
				if (chorde1) {
					if (found_entries[i_sym1]) {
						ctype = CHORDE_SYMBOL;
						pdict1 = found_entries[i_sym1];
					}
					if (found_entries[i_alp1]) {
						ctype = CHORDE_ALPHA;
						pdict1 = found_entries[i_alp1];
					}
					if (!pdict1) {
						is_error = true;
					}
				}
				if (chorde2) {
					if (found_entries[i_sym2]) {
						ctype = CHORDE_SYMBOL;
						pdict2 = found_entries[i_sym2];
					}
					if (found_entries[i_alp2]) {
						ctype = CHORDE_ALPHA;
						pdict2 = found_entries[i_alp2];
					}
					if (!pdict2) {
						is_error = true;
					}
				}
				if (found_entries[i_combo]) {
					ctype = CHORDE_SYMBOL;
					pdict0 = found_entries[i_combo];
					pdict1 = 0;
					pdict2 = 0;
					is_error = false;
				}
				if (found_entries[i_acombo]) {
					ctype = CHORDE_ALPHA;
					pdict1 = found_entries[i_acombo];
					pdict2 = 0;
					is_error = false;
				}
			}
				
			if (!is_error) {
				// type the found keys
				uint8_t type_count = 0;
				uint8_t sa = SA_NO;

				if (pdict0) {
					type_count += type_word(pdict0, sa);
					reset_mods();
				}
				
				if (pdict1) {
					if (ctype == CHORDE_ALPHA) {
						if (is_shift() && !is_caps()) {
							if (is_shift_alpha()) {
								sa = SA_SUPRESS_2;
							} else {
								sa = SA_SUPRESS_ALL;
							}
						}
					}
					type_count += type_word(pdict1, sa);
					reset_mods();
				}
				if (pdict2) {
					if (ctype == CHORDE_ALPHA) {
						if (is_shift() && !is_caps()) {
							if (is_shift_alpha()) {
								sa = SA_SUPRESS_2;
							} else {
								sa = SA_SUPRESS_ALL;
							}
						}
					}
					type_count += type_word(pdict2, sa);
					reset_mods();
				}
				
				// clean up
				if (ctype == CHORDE_COMMAND) {
					// undo is also the command
					//clear_undo_history();
				} else {
					if (type_count) {
						add_undo(type_count);
					}
				}
			}
			
			chorde = 0;
			reset_chorde_mods();
			reset_mods();

		}
	}
	
	return false;
	
}
		
