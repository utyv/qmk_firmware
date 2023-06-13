#include "chordes.h"
#include "keycodes.h"
#include "mods.h"
#include "kolobok.h"
#include "type.h"
#include "dict.h"

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
		case RU_E:
			keynum = 13;
		break;
		case RU_O:
			keynum = 14;
		break;
		case RU_A:
			keynum = 15;
		break;
		case RU_I:
			keynum = 16;
		break;
		case RU_Y:
			keynum = 17;
		break;
		case RU_U:
			keynum = 18;
		break;
		case RU_Q:
			keynum = 19;
		break;
		case RU_MZ:
			keynum = 20;
		break;
		case KC_F8:
			keynum = 21;
		break;
		case KC_F4:
			keynum = 22;
		break;
		case KC_F2:
			keynum = 23;
		break;
		case KC_F1:
			keynum = 24;
		break;
		case KC_F3:
			keynum = 25;
		break;
		case KC_SPC:
			keynum = 26;
		break;
	}
		
	return keynum;
}

bool process_chorde(uint16_t keycode, bool pressed) {
	
	if (chorde_counter) {
		set_chorde_mods();
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
			if (is_kolobok(chorde)) {
				type_kolobok(chorde);
			} else {
				bool is_spc = (chorde & B_SPC) > 0;
				uint16_t left_chorde = (uint16_t) chorde;
				if (is_spc) {
					tap_code(KC_SPC);
				}
				type_chorde16(left_chorde, left_dict, is_chorde_shift());
			}
			chorde = 0;
			reset_mods();
			reset_chorde_mods();
			
		}
	}
	
	return false;
	
}
		