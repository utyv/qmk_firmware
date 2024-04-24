#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_46( \
    L11, L12, L13, L14, L15, L16,                R12, R13, R14, R15, R16, R17, \
    L21, L22, L23, L24, L25, L26,                R22, R23, R24, R25, R26, R27, \
    L31, L32, L33, L34, L35, L36,                R32, R33, R34, R35, R36, R37, \
              L43, L44,                                    R44, R45, \
			            L45, L46, L56,      R52, R42, R43 \
) { \
    { L11, L12, L13, L14, L15, L16, XXX }, \
    { L21, L22, L23, L24, L25, L26, XXX }, \
    { L31, L32, L33, L34, L35, L36, XXX }, \
    { XXX, XXX, L43, L44, L45, L46, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, L56, XXX }, \
    { XXX, R12, R13, R14, R15, R16, R17 }, \
    { XXX, R22, R23, R24, R25, R26, R27 }, \
    { XXX, R32, R33, R34, R35, R36, R37 }, \
    { XXX, R42, R43, R44, R45, XXX, XXX }, \
    { XXX, R52, XXX, XXX, XXX, XXX, XXX } \
}
