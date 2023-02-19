/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
//#define MASTER_LEFT
//#define MASTER_RIGHT

//#define EE_HANDS

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
//#define NO_ACTION_TAPPING // disables layers
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT

#define COMBO_TERM 120


//#undef MATRIX_ROWS
//#undef MATRIX_COLS
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS

// Rows are doubled-up
//#define MATRIX_ROWS 12
//#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2 }

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
//#define TAP_CODE_DELAY 500
//#define DOUBLE_REPORT