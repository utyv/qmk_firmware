#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "chordes.c"
#include "mods.c"
#include "kolobok.c"
#include "type.c"
#include "dict.c"
#include "multitap.c"
	
#define MY_LAYOUT( \
    L00, L01, L02, L03, L04,                     R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14,                     R14, R13, R12, R11, R10, \
    L20, L21, L22, L23, L24,                     R24, R23, R22, R21, R20, \
         L31, L32,                                         R31, R30, \
                       L33, L34,                     R33, R32, \
                                 L44, L43, R42, R43, \
                                 L42, L41, R40, R41 \
) { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { XXX, L31, L32, L33, L34 }, \
    { XXX, L42, L41, L44, L43 }, \
\
    { R04, R03, R02, R01, R00 }, \
    { R14, R13, R12, R11, R10 }, \
    { R24, R23, R22, R21, R20 }, \
    { R33, R32, R31, R30, XXX }, \
    { R42, R43, R40, R41, XXX } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = MY_LAYOUT(
        RU_S,    RU_V,    RU_K,       RU_T,      KC_BSPC,                                      KC_F7,        RU_E,     RU_O,      RU_A,    RU_I,
        RU_D,    RU_B,    RU_P,       RU_N,      KC_ENT,                                       KC_F3,        RU_Y,     RU_U,      RU_Q,    RU_MZ,
        KC_1,    KC_2,    KC_4,       KC_8,      KC_DEL,                                       KC_F6,        KC_F8,    KC_F4,     KC_F2,   KC_F1,
                 KC_NO,   KC_NO,                                                                                      KC_NO,     KC_NO,
                                                            KC_LSFT,    KC_LCTL,          KC_RCTL,   KC_SPC,
                                                            KC_NO,   KC_NO,               KC_RSFT,  KC_NO,
                                                            KC_F6,   KC_F3,                 KC_NO,  KC_NO
    ),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

	if (!process_chorde(keycode, record->event.pressed)) {
		return false;
	}

	if (!process_mods(keycode, record->event.pressed)) {
		return false;
	}
		
	return true;
	
}

void matrix_scan_user(void) {
	process_multitap();
}

