
#include QMK_KEYBOARD_H
#include "keycodes.h"
#include "chordes.c"
#include "mods.c"
#include "type.c"
#include "dict.c"
#include "multitap.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[0] = LAYOUT_split_3x6_3(
         KC_NO,  RU_S,    RU_V,    RU_K,       RU_T,      KC_BSPC,                      KC_CNCL,     RU_E,     RU_O,      RU_A,    RU_I,   KC_NO,   
         KC_NO,  RU_D,    RU_B,    RU_P,       RU_N,      KC_ENT,                       KC_LALT,     RU_Y,     RU_U,      RU_Q,    RU_MZ,  KC_NO,
         KC_NO,  KC_1,    KC_2,    KC_4,       KC_8,      KC_DEL,                       KC_LGUI,     KC_F8,    KC_F4,     KC_F2,   KC_F1,  KC_NO,
                                               KC_CAPS,   KC_LSFT,  KC_LCTL,  KC_RSFT,  KC_SPC,      KC_RCTL
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