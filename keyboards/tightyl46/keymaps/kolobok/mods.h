#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

bool is_shift(void);
void shift_on(void);
void shift_off(void);
bool is_wcl(void);
bool is_ctl(void);
void ctl_on(void);
void ctl_off(void);
bool is_alt(void);
void alt_on(void);
void alt_off(void);
void alt_hold(void);
bool is_caps(void);
bool is_word(void);
bool is_phonetic(void);
void phonetic_on(void);
void phonetic_off(void);
void swap_lang(void);
bool is_onehand(void);
void onehand_on(void);
void onehand_off(void);
bool is_win(void);
void win_on(void);
void win_off(void);

void reset_mods(void);
void set_chorde_mods(void);
void reset_chorde_mods(void);

bool process_mods(uint16_t keycode, bool pressed);