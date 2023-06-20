#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

bool is_shift(void);
bool is_chorde_shift(void);
void shift_on(void);
void shift_off(void);
bool is_ctl(void);
bool is_chorde_ctl(void);
void ctl_on(void);
void ctl_off(void);
void reset_mods(void);
void set_chorde_mods(void);
void reset_chorde_mods(void);

bool process_mods(uint16_t keycode, bool pressed);