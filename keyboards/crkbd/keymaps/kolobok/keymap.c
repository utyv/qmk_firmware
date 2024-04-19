
#include QMK_KEYBOARD_H
#include "keycodes.h"
#include "chordes.c"
#include "mods.c"
#include "type.c"
#include "dict.c"
#include "multitap.c"

enum custom_keycodes {
	// layers
	CC_SD = SAFE_RANGE,
	CC_IMZ,
	CC_DU,
	CC_DD,
	CC_DV,
	CC_PJ,
	CC_OB,
	CC_UT,
	CC_KC,
	CC_W1,
	CC_W2,
	CC_W3,
	CC_W4,
	CC_W5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[0] = LAYOUT_split_3x6_3(
         CC_DU,  RU_S,    RU_V,    RU_K,       RU_T,      KC_BSPC,                      KC_CNCL,     RU_E,     RU_O,      RU_A,    RU_I,   CC_DV,   
         CC_SD,  RU_D,    RU_B,    RU_P,       RU_N,      KC_ENT,                       KC_LALT,     RU_Y,     RU_U,      RU_Q,    RU_MZ,  CC_IMZ,
         CC_DD,  KC_1,    KC_2,    KC_4,       KC_8,      KC_DEL,                       CC_W5,       KC_F8,    KC_F4,     KC_F2,   KC_F1,  CC_PJ,
                                               KC_CAPS,   KC_LSFT,  KC_LCTL,    CC_UT,  KC_SPC,  CC_OB
),


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	#ifdef UTYUMOV
    switch (keycode) {
		case CC_SD:
		    process_chorde(RU_S, record->event.pressed);
		    process_chorde(RU_D, record->event.pressed);
		return false;
		case CC_IMZ:
		    process_chorde(RU_I, record->event.pressed);
			process_chorde(RU_MZ, record->event.pressed);
		return false;
		case CC_DU:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_D, record->event.pressed);
		    process_chorde(RU_U, record->event.pressed);
		return false;
		case CC_DD:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_D, record->event.pressed);
		    process_chorde(RU_MZ, record->event.pressed);
		return false;
		case CC_DV:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_D, record->event.pressed);
		    process_chorde(RU_E, record->event.pressed);
		return false;
		case CC_PJ:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_T, record->event.pressed);
		    process_chorde(RU_D, record->event.pressed);
		    process_chorde(RU_P, record->event.pressed);
		return false;
		case CC_OB:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_O, record->event.pressed);
		return false;
		case CC_UT:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_U, record->event.pressed);
		return false;
		case CC_W1:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_T, record->event.pressed);
		    process_chorde(RU_P, record->event.pressed);
		return false;
		case CC_W2:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_V, record->event.pressed);
		    process_chorde(RU_D, record->event.pressed);
		return false;
		case CC_W3:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_K, record->event.pressed);
		return false;
		case CC_W4:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_P, record->event.pressed);
		return false;
		case CC_W5:
		    process_mods(KC_RSFT, record->event.pressed);
		    process_chorde(RU_U, record->event.pressed);
		    process_chorde(RU_Q, record->event.pressed);
		return false;
	}
	#endif
	if (!process_chorde(keycode, record->event.pressed)) {
		return false;
	}

	if (!process_mods(keycode, record->event.pressed)) {
		return false;
	}
		
	return true;
}

void matrix_scan_user(void) {
	process_multitap();
}