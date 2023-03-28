#pragma once
#include QMK_KEYBOARD_H
#include "keycodes.h"
#include "mods.h"
#include "dicts.h"
#include "macros.h"
#include "multitap.h"


bool process_chorde(uint16_t keycode, bool pressed);
uint8_t get_char_counter(void);