#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

#define LANG_RU 0x00
#define LANG_EN 0x01

bool is_shift(void);
bool is_shift_alpha(void);
void supress_shift_alpha(void);

void shift_on(void);
void shift_off(void);
bool is_ctl(void);
void ctl_on(void);
void ctl_off(void);
void alt_on(void);
void alt_off(void);
void alt_hold(void);
bool is_caps(void);
void swap_lang(void);
void win_on(void);
void win_off(void);

uint8_t get_lang(void);
void set_lang(uint8_t new_lang);

void reset_mods(void);
void set_chorde_mods(void);
void reset_chorde_mods(void);

bool process_mods(uint16_t keycode, bool pressed);