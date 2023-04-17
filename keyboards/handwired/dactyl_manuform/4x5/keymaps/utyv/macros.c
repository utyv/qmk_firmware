#include "macros.h"

void process_macro(uint32_t chord) {

	uint8_t n = 0;

	switch (chord) {
		// case BM(AL_1) | BM(BL_6):
		// 	phonetic_off();
		// break;
		// case BM(AL_3) | BM(BL_7):
		// 	phonetic_on();
		// break;
		case BM(BL_0) | BM(BL_1):
		case BM(BR_0) | BM(BR_1):
			
			n = get_char_counter();
		
			if (n) {
				while (n) {
					tap_code(KC_BSPC);
					--n;
				}
			} else {
				tap_code(KC_BSPC);
			}
		break;
	}
		
}