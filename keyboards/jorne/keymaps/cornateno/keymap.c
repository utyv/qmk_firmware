// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "mods.c"
#include "alpha.c"
#include "beta.c"
#include "chordes.c"
#include "dance.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_NO, KC_DEL,  AL_1,    AL_3,    AL_5,       AL_7,      BL_0,                     BR_0,        AR_1,     AR_3,      AR_5,    AR_7,   KC_DEL,  KC_NO,
         KC_ENT,  AL_0,    AL_2,    AL_4,       AL_6,      BL_1,                     BR_1,        AR_0,     AR_2,      AR_4,    AR_6,   KC_ENT,
         KC_BSPC, BL_6,    BL_5,    BL_4,       BL_3,      BL_2,                     BR_2,        BR_3,     BR_4,      BR_5,    BR_6,   KC_BSPC,
                                                CLL,       SFL,     LRL,     LRR,    SFR,         CLR
),


};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	
	if (!process_chorde(keycode, record->event.pressed)) {
		return false;
	}
	stop_dance();
	if (!process_mods(keycode, record->event.pressed)) {
		return false;
	}
	
	return true;
}

