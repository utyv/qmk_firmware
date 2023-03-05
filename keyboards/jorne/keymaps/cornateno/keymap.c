// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_NO, KC_NO,         KC_NO,    KC_NO,    KC_NO,       KC_NO,      KC_NO,            KC_NO,       KC_NO,     KC_NO,        KC_NO,    KC_NO,           KC_NO,  KC_NO,
             KC_NO,        KC_NO,    KC_NO,    KC_NO,       KC_NO,      KC_NO,            KC_NO,       KC_NO,     KC_NO,        KC_NO,    KC_NO,        KC_NO,
             KC_NO,       KC_NO,    KC_NO,    KC_NO,       KC_NO,      KC_NO,            KC_NO,       KC_NO,     KC_NO,     KC_NO,  KC_NO, KC_NO,
                                              KC_NO,  KC_NO,   KC_NO,       KC_NO,  KC_NO,   KC_NO
),


};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

