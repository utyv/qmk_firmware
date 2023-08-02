// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "chordes.c"
#include "mods.c"
#include "kolobok.c"
#include "type.c"
#include "dict.c"
#include "multitap.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
[0] = LAYOUT(
  KC_NO, KC_NO,  RU_S,    RU_V,    RU_K,       RU_T,      KC_BSPC,                    KC_NO,       RU_E,     RU_O,      RU_A,    RU_I,   KC_NO,  KC_NO,
         KC_NO,  RU_D,    RU_B,    RU_P,       RU_N,      KC_ENT,                     KC_F3,        RU_Y,     RU_U,      RU_Q,    RU_MZ,  KC_NO,
         KC_NO,  KC_1,    KC_2,    KC_4,       KC_8,      KC_DEL,                     KC_NO,        KC_F8,    KC_F4,     KC_F2,   KC_F1,  KC_NO,
                                               KC_NO,     KC_LSFT,  KC_LCTL,  KC_NO,  KC_SPC,        KC_NO
),


};
*/

[0] = LAYOUT(
  KC_NO, KC_NO,  RU_I,    RU_A,    RU_O,       RU_E,      KC_NO,                    KC_BSPC,       RU_T,     RU_K,      RU_V,    RU_S,   KC_NO,  KC_NO,
         KC_NO,  RU_MZ,    RU_Q,    RU_U,       RU_Y,      KC_F3,                     KC_ENT,        RU_N,     RU_P,      RU_B,    RU_D,  KC_NO,
         KC_NO,  KC_F1,    KC_F2,    KC_F4,       KC_F8,      KC_NO,                     KC_DEL,        KC_8,    KC_4,     KC_2,   KC_1,  KC_NO,
                                               KC_NO,     KC_SPC,  KC_NO,  KC_LCTL,  KC_LSFT,        KC_F5
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

