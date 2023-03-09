#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

bool is_shift(void);
void shift_on(void);
void shift_off(void);
void shift_reset(void);
bool is_ctl(void);
void ctl_on(void);
void ctl_off(void);
void ctl_reset(void);
bool is_layer(void);
bool is_alt(void);
void alt_on(void);
void alt_off(void);
void alt_reset(void);

bool process_mods(uint16_t keycode, bool pressed);
