#pragma once
#include QMK_KEYBOARD_H
#include "mods.h"

bool is_multitap(void);
void start_multitap(uint8_t key1);
void stop_multitap(void);
void process_multitap(void);