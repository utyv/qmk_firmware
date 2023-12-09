// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
/*
#define OLED_DISPLAY_128X32

#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
*/

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define NO_MUSIC_MODE
//#define LAYER_STATE_8BIT

#define MASTER_RIGHT

//#define ONESHOT_TAP_TOGGLE 3
//#define ONESHOT_TIMEOUT 5000
//#define COMBO_TERM 80
//#define EXTRA_SHORT_COMBOS

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK
#define MOD_DELAY 10

#define KOLOBOK_LEVEL_1
#define UTYUMOV
#define USE_ALTCODE