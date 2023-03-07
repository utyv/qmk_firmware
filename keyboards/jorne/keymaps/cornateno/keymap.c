// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "mods.c"
#include "chordes.c"
#include "alpha.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_NO, KC_DEL,  AL_1,    AL_3,    AL_5,       AL_7,      KC_NO,                     KC_NO,       AR_1,     AR_3,      AR_5,    AR_7,   KC_DEL,  KC_NO,
         KC_ENT,  AL_0,    AL_2,    AL_4,       AL_6,      KC_NO,                     KC_NO,       AR_0,     AR_2,      AR_4,    AR_6,   KC_ENT,
         KC_BSPC, KC_NO,   KC_NO,   KC_NO,      KC_NO,     KC_NO,                     KC_NO,       KC_NO,    KC_NO,     KC_NO,   KC_NO,  KC_BSPC,
                                                KC_NO,     KC_NO,   KC_NO,    KC_NO,  KC_NO,       KC_NO
),


};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	
	if (!process_alpha(keycode, record->event.pressed)) {
		return false;
	}
	
	return true;
}

