
#include QMK_KEYBOARD_H
#include "../../../crkbd/keymaps/kolobok2/keycodes.h"
#include "../../../crkbd/keymaps/kolobok2/chordes.c"
#include "../../../crkbd/keymaps/kolobok2/mods.c"
#include "../../../crkbd/keymaps/kolobok2/type.c"
#include "../../../crkbd/keymaps/kolobok2/dict.c"
#include "../../../crkbd/keymaps/kolobok2/multitap.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[0] = LAYOUT_46(
         CC_L15, CC_L14, CC_L13, CC_L12, CC_L11, CC_L10,                      CC_R10, CC_R11, CC_R12, CC_R13, CC_R14, CC_R15,   
         CC_L05, CC_L04, CC_L03, CC_L02, CC_L01, CC_L00,                      CC_R00, CC_R01, CC_R02, CC_R03, CC_R04, CC_R05,
         CC_L25, CC_L24, CC_L23, CC_L22, CC_L21, CC_L20,                      CC_R20, CC_R21, CC_R22, CC_R23, CC_R24, CC_R25,
		                  KC_NO, KC_NO,                                                        KC_NO, KC_NO, 
                                         CC_L33, CC_L32, CC_L31,      CC_R31, CC_R32, CC_R33
),


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (!process_chorde(keycode, record->event.pressed)) {
		return false;
	}

	if (!process_mods(keycode, record->event.pressed)) {
		return false;
	}
		
	return false;
}

void matrix_scan_user(void) {
	process_multitap();
}