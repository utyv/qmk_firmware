#include "chordes.h"
#include "keycodes.h"
#include "mods.h"
#include "kolobok.h"
#include "type.h"
#include "dict.h"
#include "multitap.h"

uint32_t chorde = 0;
uint8_t chorde_counter = 0;

uint8_t get_keynum(uint16_t keycode) {

	uint8_t keynum = 0;
	
	switch (keycode) {
		
		case RU_S:
			keynum = 1;
		break;
		case RU_V:
			keynum = 2;
		break;
		case RU_K:
			keynum = 3;
		break;
		case RU_T:
			keynum = 4;
		break;
		case RU_D:
			keynum = 5;
		break;
		case RU_B:
			keynum = 6;
		break;
		case RU_P:
			keynum = 7;
		break;
		case RU_N:
			keynum = 8;
		break;
		case KC_1:
			keynum = 9;
		break;
		case KC_2:
			keynum = 10;
		break;
		case KC_4:
			keynum = 11;
		break;
		case KC_8:
			keynum = 12;
		break;
		case KC_BSPC:
			keynum = 13;
		break;
		case KC_ENT:
			keynum = 14;
		break;
		case KC_DEL:
			keynum = 15;
		break;
		case RU_E:
			keynum = 17;
		break;
		case RU_O:
			keynum = 18;
		break;
		case RU_A:
			keynum = 19;
		break;
		case RU_I:
			keynum = 20;
		break;
		case RU_Y:
			keynum = 21;
		break;
		case RU_U:
			keynum = 22;
		break;
		case RU_Q:
			keynum = 23;
		break;
		case RU_MZ:
			keynum = 24;
		break;
		case KC_F1:
			keynum = 25;
		break;
		case KC_F2:
			keynum = 26;
		break;
		case KC_F4:
			keynum = 27;
		break;
		case KC_F8:
			keynum = 28;
		break;
		case KC_F3:
			keynum = 29;
		break;
		case KC_SPC:
			keynum = 30;
		break;
		case KC_F6:
			keynum = 31;
		break;
		case KC_F7:
			keynum = 32;
		break;
	}
		
	return keynum;
}

bool process_chorde(uint16_t keycode, bool pressed) {
	
	if (chorde_counter) {
		set_chorde_mods();
	}
	
	if (keycode == KC_F5) {
		if (chorde_counter) {
			if (pressed) {
				const uint8_t *pword = 0;
				uint16_t left_chorde = (uint16_t) chorde;
				if (is_chorde_ctl()) {
					pword = find_word16(left_chorde, nav_dict);
				} else {
					pword = find_word16(left_chorde, left_dict);
				}
				if (pword) {
					start_multitap(pword);
				}
				
			} else {
				stop_multitap();				
			}
		}
		return false;
	}
		
	uint8_t keynum = get_keynum(keycode);
	
	if (!keynum) {
		return true;
	}
	
	if (pressed) {
		++chorde_counter;
		chorde |= (1ul << (keynum - 1));
		set_chorde_mods();
	} else {
		--chorde_counter;
		if (!chorde_counter) {
			
			if (was_multitap_active()) {
				clear_multitap();
			} else {
			
				if (is_chorde_ctl()) {
					uint16_t left_chorde = (uint16_t) chorde;
					const uint8_t *pword = find_word16(left_chorde, nav_dict);
					if (pword) {
						type_word(pword, false, false);
						clear_undo_history();
					}
					// type_chorde16(left_chorde, nav_dict, false);
				} else if (chorde & B_RU) {
					switch (chorde) {
						case B_RU:
							phonetic_off();
							swap_lang();
						break;
						case B_RU | B_AST:
							phonetic_on();
							swap_lang();
						break;
					}
				} else if (chorde == B_UND) {
					undo();
				} else if (is_phonetic()) {
					uint16_t left_chorde = (uint16_t) chorde;
					uint16_t rght_chorde = (uint16_t) ((chorde & ~B_SPC) >> 16);
					bool is_spc = (chorde & B_SPC) > 0;
					bool caps_first = is_chorde_shift();
					bool caps_all = is_chorde_caps();
					
					const uint8_t *plword = 0;
					if (left_chorde) {
						plword = find_word16(left_chorde, phonetic_left_dict);
					}
					
					const uint8_t *prword = 0;
					if (rght_chorde) {
						prword = find_word16(rght_chorde, phonetic_rght_dict);
					}
					
					if (
						(plword || !left_chorde)
						&& (prword || !rght_chorde)
					) {
						
						uint8_t type_count = 0;
						
						if (is_spc) {
							tap_code(KC_SPC);
							++type_count;
						}
						if (left_chorde) {
							type_count += type_word(plword, caps_first, caps_all);
							caps_first = false;
						}
						if (rght_chorde) {
							type_count += type_word(prword, caps_first, caps_all);
						}
						
						add_undo(type_count);
						
					}
					
				} else if (is_chorde_word()) {
					
					type_chorde_word(chorde);
					
				} else if (is_kolobok(chorde)) {
					type_kolobok(chorde);
				} else {
					
					bool is_spc = (chorde & B_SPC) > 0;
					uint16_t left_chorde = (uint16_t) chorde;
					
					uint8_t type_count = 0;
					
					if (is_spc) {
						tap_code(KC_SPC);
						++type_count;
					}
					const uint8_t *pword = find_word16(left_chorde, left_dict);
					if (pword) {
						type_count += type_word(pword, is_chorde_shift(), is_chorde_caps());
					}

					add_undo(type_count);
					
				}
			}
			
			chorde = 0;
			reset_mods();
			reset_chorde_mods();
			
		}
	}
	
	return false;
	
}
		