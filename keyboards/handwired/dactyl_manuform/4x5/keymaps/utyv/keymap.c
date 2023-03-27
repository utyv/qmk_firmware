#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "mods.c"
#include "dicts.c"
#include "chordes.c"
#include "macros.c"
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
        AL_1,    AL_3,    AL_5,       AL_7,      BL_0,                                         BR_0,        AR_1,     AR_3,      AR_5,    AR_7,
        AL_0,    AL_2,    AL_4,       AL_6,      BL_1,                                         BR_1,        AR_0,     AR_2,      AR_4,    AR_6,
        BL_6,    BL_5,    BL_4,       BL_3,      BL_2,                                         BR_2,        BR_3,     BR_4,      BR_5,    BR_6,
                 BL_7,   KC_NO,                                                                                      KC_NO,     KC_NO,
                                                            LRL,     SFL,         SFR,  LRR,
                                                            KC_NO,   KC_NO,       KC_NO, KC_NO,
                                                            KC_NO,   KC_NO,       KC_NO, KC_NO
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

