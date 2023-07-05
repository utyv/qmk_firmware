#include QMK_KEYBOARD_H
#include "kolobok.h"
#include "keycodes.h"
#include "type.h"
#include "dict.h"

#define LEFT_MASK (B_S | B_V | B_K | B_T | B_D | B_B | B_P | B_N)
#define LEFT_NUMS (B_L1 | B_L2 | B_L4 | B_L8)
#define RGHT_MASK (B_E | B_O | B_A | B_I | B_Y | B_U | B_Q | B_MZ)
#define RGHT_NUMS (B_R1 | B_R2 | B_R4 | B_R8)


bool is_kolobok(uint32_t chorde) {
	if (chorde & RGHT_MASK) {
		return true;
	}
	if (chorde & RGHT_NUMS) {
		return true;
	}
	if (chorde & LEFT_MASK && chorde & RGHT_MASK) {
		return true;
	}
	if (chorde & LEFT_MASK && chorde & B_AST) {
		return true;
	}
	return false;
}

void type_kolobok(uint32_t chorde) {
	uint16_t left_cube = chorde & (LEFT_MASK | LEFT_NUMS);
	uint16_t rght_cube = (chorde & (RGHT_MASK | RGHT_NUMS)) >> 12;
	bool is_spc = (chorde & B_SPC) > 0;
	bool caps_first = is_chorde_shift();
	
	if (is_spc) {
		tap_code(KC_SPC);
	}
	if (left_cube) {
		type_chorde16(left_cube, kolobok_left_dict, caps_first);
		caps_first = false;
	}
	if (rght_cube) {
		type_chorde16(rght_cube, kolobok_rght_dict, caps_first);
	}
}
