// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

bool is_shift = false;

enum layers {
	_DEF1 = 0,
    _NUM0,
	_NUM1,
    _NAV0,
};


enum custom_keycodes {
	// layers
	M_SPC = SAFE_RANGE // not used
	//, M_NAV0
	//, M_REV1
 	// symbols
    , M_AT 
	, M_HASH
	, M_DOLLAR
	, M_CARET
	, M_AMP
	, M_LBKT
	, M_RBKT
	, M_LBRC
	, M_RBRC
	, M_PIPE
	, M_SQT
	, M_LT
	, M_GT
	, M_TILDE
	, M_SLASH
	, M_QUES
	, M_ASTR
	, M_EXCL
	// navigation
	, M_CHOME
	, M_CEND
	// words
	, M_UTYV
};

enum combo_events {
  // layers
  //CB_QZ,
  //CB_WX,
  //CB_SHFTSPC,
  //CB_REVNAV,
  // lang
  CB_HOMEEND,
  // letters
  CB_QW,
  // numpad
  CB_46,
  CB_56,
  CB_45,
  CB_79,
  CB_89,
  CB_78,
  CB_13,
  CB_23,
  CB_12,
  CB_58,
  CB_69,
  CB_AMPPIPE,
  CB_47,
  CB_QUESAMP,
  CB_14,
  CB_25,
  CB_36,
  CB_PIPE9,
  CB_AMP6,
  CB_QUES3,
  CB_PIPEASTR,
  CB_AMPSLASH,
  CB_QUESEXCL,
  //navigation
  CB_HOMEF2,
  CB_PGDNF3,
  CB_PGUPF4,
  CB_ENDF5,
  CB_CHOMEHOME,
  CB_CENDEND,
  CB_ENTTAB,
  // 
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

// layers
//const uint16_t PROGMEM combo_qz[] = {KC_Q, KC_Z, COMBO_END};
//const uint16_t PROGMEM combo_wx[] = {KC_W, KC_X, COMBO_END};
//const uint16_t PROGMEM combo_SHFTSPC[] = {KC_LSFT, M_SPC, COMBO_END};
//const uint16_t PROGMEM combo_REVNAV[] = {M_REV1, M_NAV0, COMBO_END};
// lang
const uint16_t PROGMEM combo_HOMEEND[] = {KC_HOME, KC_END, COMBO_END};
// letters
const uint16_t PROGMEM combo_qw[] = {KC_Q, KC_W, COMBO_END};
//numpad
const uint16_t PROGMEM combo_46[] = {KC_4, KC_6, COMBO_END};
const uint16_t PROGMEM combo_56[] = {KC_5, KC_6, COMBO_END};
const uint16_t PROGMEM combo_45[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo_79[] = {KC_7, KC_9, COMBO_END};
const uint16_t PROGMEM combo_89[] = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo_78[] = {KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM combo_13[] = {KC_1, KC_3, COMBO_END};
const uint16_t PROGMEM combo_23[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo_12[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo_58[] = {KC_5, KC_8, COMBO_END};
const uint16_t PROGMEM combo_69[] = {KC_6, KC_9, COMBO_END};
const uint16_t PROGMEM combo_AMPPIPE[] = {M_AMP, M_PIPE, COMBO_END};
const uint16_t PROGMEM combo_47[] = {KC_4, KC_7, COMBO_END};
const uint16_t PROGMEM combo_QUESAMP[] = {M_QUES, M_AMP, COMBO_END};
const uint16_t PROGMEM combo_14[] = {KC_1, KC_4, COMBO_END};
const uint16_t PROGMEM combo_25[] = {KC_2, KC_5, COMBO_END};
const uint16_t PROGMEM combo_36[] = {KC_3, KC_6, COMBO_END};
const uint16_t PROGMEM combo_PIPE9[] = {M_PIPE, KC_9, COMBO_END};
const uint16_t PROGMEM combo_AMP6[] = {M_AMP, KC_6, COMBO_END};
const uint16_t PROGMEM combo_QUES3[] = {M_QUES, KC_3, COMBO_END};
const uint16_t PROGMEM combo_PIPEASTR[] = {M_PIPE, M_ASTR, COMBO_END};
const uint16_t PROGMEM combo_AMPSLASH[] = {M_AMP, M_SLASH, COMBO_END};
const uint16_t PROGMEM combo_QUESEXCL[] = {M_QUES, M_EXCL, COMBO_END};
//navigation
const uint16_t PROGMEM combo_HOMEF2[] = {KC_HOME, KC_F2, COMBO_END};
const uint16_t PROGMEM combo_PGDNF3[] = {KC_PGDN, KC_F3, COMBO_END};
const uint16_t PROGMEM combo_PGUPF4[] = {KC_PGUP, KC_F4, COMBO_END};
const uint16_t PROGMEM combo_ENDF5[] = {KC_END, KC_F5, COMBO_END};
const uint16_t PROGMEM combo_CHOMEHOME[] = {M_CHOME, KC_HOME, COMBO_END};
const uint16_t PROGMEM combo_CENDEND[] = {M_CEND, KC_END, COMBO_END};
const uint16_t PROGMEM combo_ENTTAB[] = {KC_ENTER, KC_TAB, COMBO_END};


combo_t key_combos[] = {
  // layers
  //[CB_QZ] = COMBO_ACTION(combo_qz),
  //[CB_WX] = COMBO_ACTION(combo_wx),
  //[CB_SHFTSPC] = COMBO_ACTION(combo_SHFTSPC),
  //[CB_REVNAV] = COMBO_ACTION(combo_REVNAV),
  // lang
  [CB_HOMEEND] = COMBO_ACTION(combo_HOMEEND),
  // letters
  [CB_QW] = COMBO_ACTION(combo_qw),
  // numpad
  [CB_46] = COMBO_ACTION(combo_46),
  [CB_56] = COMBO_ACTION(combo_56),
  [CB_45] = COMBO_ACTION(combo_45),
  [CB_79] = COMBO_ACTION(combo_79),
  [CB_89] = COMBO_ACTION(combo_89),
  [CB_78] = COMBO_ACTION(combo_78),
  [CB_13] = COMBO_ACTION(combo_13),
  [CB_23] = COMBO_ACTION(combo_23),
  [CB_12] = COMBO_ACTION(combo_12),
  [CB_58] = COMBO_ACTION(combo_58),
  [CB_69] = COMBO_ACTION(combo_69),
  [CB_AMPPIPE] = COMBO_ACTION(combo_AMPPIPE),
  [CB_47] = COMBO_ACTION(combo_47),
  [CB_QUESAMP] = COMBO_ACTION(combo_QUESAMP),
  [CB_14] = COMBO_ACTION(combo_14),
  [CB_25] = COMBO_ACTION(combo_25),
  [CB_36] = COMBO_ACTION(combo_36),
  [CB_PIPE9] = COMBO_ACTION(combo_PIPE9),
  [CB_AMP6] = COMBO_ACTION(combo_AMP6),
  [CB_QUES3] = COMBO_ACTION(combo_QUES3),
  [CB_PIPEASTR] = COMBO_ACTION(combo_PIPEASTR),
  [CB_AMPSLASH] = COMBO_ACTION(combo_AMPSLASH),
  [CB_QUESEXCL] = COMBO_ACTION(combo_QUESEXCL),
  //navigation
  [CB_HOMEF2] = COMBO_ACTION(combo_HOMEF2),
  [CB_PGDNF3] = COMBO_ACTION(combo_PGDNF3),
  [CB_PGUPF4] = COMBO_ACTION(combo_PGUPF4),
  [CB_ENDF5] = COMBO_ACTION(combo_ENDF5),
  [CB_CHOMEHOME] = COMBO_ACTION(combo_CHOMEHOME),
  [CB_CENDEND] = COMBO_ACTION(combo_CENDEND),
  [CB_ENTTAB] = COMBO_ACTION(combo_ENTTAB),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
[_DEF0] = LAYOUT(
  KC_ESCAPE, KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,            KC_Y,       KC_U,     KC_I,        KC_O,    KC_P,           KC_LBRC,  KC_RBRC,
             KC_SPC,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,            KC_H,       KC_J,     KC_K,        KC_L,    KC_SCLN,        KC_QUOT,
             KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,            KC_N,       KC_M,     KC_COMM,     KC_DOT,  LSFT(KC_MINUS), KC_NO,
                                        KC_SPC,  KC_LSFT,  MO(_NAV0),       MO(_NUM0),  KC_LSFT,  LALT(KC_LSFT)
),
*/
[_DEF1] = LAYOUT(
  KC_ESCAPE, KC_NO,         KC_Q,    KC_W,    KC_E,       KC_R,      KC_T,            KC_Y,       KC_U,     KC_I,        KC_O,    KC_P,           KC_LBRC,  KC_RBRC,
             KC_SPC,        KC_A,    KC_S,    KC_D,       KC_F,      KC_G,            KC_H,       KC_J,     KC_K,        KC_L,    KC_SCLN,        KC_QUOT,
             KC_LCTL,       KC_Z,    KC_X,    KC_C,       KC_V,      KC_B,            KC_N,       KC_M,     KC_COMM,     KC_DOT,  LSFT(KC_MINUS), KC_NO,
                                              MO(_NUM1),  KC_LSFT,   MO(_NAV0),       MO(_NUM0),  KC_LSFT,   KC_SPC
),

[_NUM0] = LAYOUT(
  KC_NO,   M_DOLLAR,      M_LBKT,  M_RBKT,  LSFT(KC_3),   LSFT(KC_4), LSFT(KC_5),      LSFT(KC_6), M_TILDE,    LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), M_LBRC, M_RBRC,
           LSFT(KC_BSLS), KC_1,    KC_2,    KC_3,         KC_4,       KC_5,            KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       M_SQT,
           KC_BSLS,       M_HASH,  M_AT,    M_PIPE,       LSFT(KC_2), KC_MINS,         LSFT(KC_1), LSFT(KC_7), M_LT,       M_GT,       M_AMP,      M_CARET,
                                            LSFT(KC_EQL), KC_EQL,     KC_SLSH,         KC_NO,      KC_TRNS,    LSFT(KC_SLSH)
),  

[_NUM1] = LAYOUT(
  KC_NO,   KC_NO,      M_PIPE, KC_7,  KC_8 ,      KC_9,    M_ASTR,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
           KC_TRNS,    M_AMP,  KC_4,  KC_5,       KC_6,    M_SLASH,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
           KC_NO,      M_QUES, KC_1,  KC_2,       KC_3,    M_EXCL,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                      KC_NO,      KC_TRNS, KC_TRNS,         KC_NO, KC_NO, KC_NO
),  

[_NAV0] = LAYOUT(
  LCTL(KC_MINUS), KC_F12,  KC_F2,         KC_F3,         KC_F4,         KC_F5,        KC_ENTER,     M_UTYV,         LCTL(KC_PSLS), KC_F9,         KC_PSCR,       KC_F1,         KC_F12,  LCTL(KC_MINUS),
                  KC_LALT, KC_HOME,       KC_PGDN,       KC_PGUP,       KC_END,       KC_TAB,       KC_ENTER,       KC_LEFT,       KC_UP,         KC_DOWN,       KC_RGHT,       KC_NO,
                  KC_LCTL, M_CHOME,       LCTL(KC_LBRC), LCTL(KC_RBRC), M_CEND,       KC_DEL,       LCTL(KC_ENTER), LCTL(KC_LEFT), LCTL(KC_PMNS), LCTL(KC_PPLS), LCTL(KC_RGHT), KC_NO,
                                                         KC_BSPC,       KC_TRNS,      KC_NO,        KC_APP,         KC_BSPC,       LCTL(KC_PAUS)
),

};

void tap_alt_code2(uint16_t mods, uint8_t n1, uint8_t n2) {
	unregister_mods(mods);
	register_mods(MOD_BIT(KC_LEFT_ALT));
	if (n1 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n1 - 1);
	}
	if (n2 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n2 - 1);
	}
	unregister_mods(MOD_BIT(KC_LEFT_ALT));
	register_mods(mods);
}

void tap_alt_code3(uint16_t mods, uint8_t n1, uint8_t n2, uint8_t n3) {
	unregister_mods(mods);
	register_mods(MOD_BIT(KC_LEFT_ALT));
	if (n1 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n1 - 1);
	}
	if (n2 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n2 - 1);
	}
	if (n3 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n3 - 1);
	}
	unregister_mods(MOD_BIT(KC_LEFT_ALT));
	register_mods(mods);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint16_t mods = get_mods();
  switch (keycode) {
    // mods
	case KC_LSFT:
		if (record->event.pressed) {
			is_shift = true;
		} else {
			is_shift = false;
		}
		break;
	// layers
	/*
	case M_SPC:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(" ");
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
    case M_NAV0:
		if (record->event.pressed) {
 		    SEND_STRING("+");
		} else {
 		    SEND_STRING("-");
		}
		break;
    
	case M_REV1:
		if (record->event.pressed) {
			layer_on(_REV1);
		} else {
			layer_off(_REV1);
		}
		break;
	*/
	// symbols
	case M_AT:
        if (record->event.pressed) {
			tap_alt_code2(mods, 6, 4);
			/*
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P4) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
			*/
        }
      break;
	case M_HASH:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P5) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_DOLLAR:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P6) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_CARET:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P9) SS_TAP(X_P4) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_AMP:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P8) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_LBKT:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P9) SS_TAP(X_P1) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_RBKT:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P9) SS_TAP(X_P3) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_LBRC:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P3) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_RBRC:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P5) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_PIPE:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P4) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_SQT:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P9) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_LT:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P0) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_GT:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P2) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_TILDE:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P6) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_SLASH:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P4) SS_TAP(X_P7) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_QUES:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P3) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_ASTR:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING("*");
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	case M_EXCL:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING("!");
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
	// navigation
    case M_CHOME:
      if (record->event.pressed) {
 		// {
		tap_code16(LCTL(KC_HOME));
      }
      break;
    case M_CEND:
      if (record->event.pressed) {
 		// {
		tap_code16(LCTL(KC_END));
      }
      break;
	
	// words
	case M_UTYV:
        if (record->event.pressed) {
			if (is_shift) {
				SEND_STRING(SS_UP(X_LSFT));
			}
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P1) SS_TAP(X_P7) SS_UP(X_LALT));
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P1) SS_TAP(X_P6) SS_UP(X_LALT));
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P1) SS_UP(X_LALT));
			SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P1) SS_TAP(X_P8) SS_UP(X_LALT));
			if (is_shift) {
				SEND_STRING(SS_DOWN(X_LSFT));
			}
        }
      break;
  }
  return true;
}

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
	// layers
	/*
    case CB_QZ:
      if (pressed && layer_state_is(_DEF1)) {
        layer_clear();
		layer_on(_DEF0);
      }
      break;
    case CB_WX:
      if (pressed && layer_state_is(_DEF0)) {
        layer_clear();
		layer_on(_DEF1);
      }
      break;
	
    case CB_SHFTSPC:
      if (layer_state_is(_DEF1)) {
		  if (pressed) {
			 //SEND_STRING("+");
		     layer_on(_NUM1);
		  } else {
			 //SEND_STRING("-");
			 layer_off(_NUM1);
		  }
      }
      break;
    case CB_REVNAV:
      if (layer_state_is(_DEF0)) {
		  if (pressed) {
		     layer_on(_NVS1);
		  } else {
			 layer_off(_NVS1);
		  }
      }
      break;
	*/
	// lang
    case CB_HOMEEND:
      if (pressed && layer_state_is(_NAV0)) {
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_LSFT) SS_UP(X_LALT));
      }
      break;
	
	// letters
    case CB_QW:
      if (pressed && layer_state_is(_DEF1)) {
		SEND_STRING("`");
      }
      break;
	
	// numpad
    case CB_46:
      if (pressed && layer_state_is(_NUM1)) {
 		SEND_STRING("0");
		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_56:
      if (pressed && layer_state_is(_NUM1)) {
		// dot
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P4) SS_TAP(X_P6) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_45:
      if (pressed && layer_state_is(_NUM1)) {
		// comma
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P4) SS_TAP(X_P4) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_79:
      if (pressed && layer_state_is(_NUM1)) {
 		SEND_STRING("=");
		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_89:
      if (pressed && layer_state_is(_NUM1)) {
 		SEND_STRING("+");
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_78:
      if (pressed && layer_state_is(_NUM1)) {
 		SEND_STRING("-");
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
     }
      break;
    case CB_13:
      if (pressed && layer_state_is(_NUM1)) {
 		// double quot
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P4) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_23:
      if (pressed && layer_state_is(_NUM1)) {
		// semicolon
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P5) SS_TAP(X_P9) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_12:
      if (pressed && layer_state_is(_NUM1)) {
		// colon
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P5) SS_TAP(X_P8) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
     }
      break;
    case CB_58:
      if (pressed && layer_state_is(_NUM1)) {
 		SEND_STRING("(");
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_69:
      if (pressed && layer_state_is(_NUM1)) {
 		SEND_STRING(")");
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_AMPPIPE:
      if (pressed && layer_state_is(_NUM1)) {
 		// <
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P0) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_47:
      if (pressed && layer_state_is(_NUM1)) {
 		// <
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P2) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_QUESAMP:
      if (pressed && layer_state_is(_NUM1)) {
 		// [
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P9) SS_TAP(X_P1) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_14:
      if (pressed && layer_state_is(_NUM1)) {
 		// ]
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P9) SS_TAP(X_P3) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_25:
      if (pressed && layer_state_is(_NUM1)) {
 		// {
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P3) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_36:
      if (pressed && layer_state_is(_NUM1)) {
 		// {
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P2) SS_TAP(X_P5) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_PIPE9:
      if (pressed && layer_state_is(_NUM1)) {
 		// @
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P6) SS_TAP(X_P4) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_AMP6:
      if (pressed && layer_state_is(_NUM1)) {
 		// #
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P5) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_QUES3:
      if (pressed && layer_state_is(_NUM1)) {
 		// $
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P3) SS_TAP(X_P6) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_PIPEASTR:
      if (pressed && layer_state_is(_NUM1)) {
 		// %
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING("%");
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_AMPSLASH:
      if (pressed && layer_state_is(_NUM1)) {
 		// №
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P2) SS_TAP(X_P5) SS_TAP(X_P2) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
    case CB_QUESEXCL:
      if (pressed && layer_state_is(_NUM1)) {
 		// ^
		if (is_shift) {
			SEND_STRING(SS_UP(X_LSFT));
		}
		SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P9) SS_TAP(X_P4) SS_UP(X_LALT));
		if (is_shift) {
			SEND_STRING(SS_DOWN(X_LSFT));
		}
 		//clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
      }
      break;
	// navigation
    case CB_HOMEF2:
      if (pressed && layer_state_is(_NAV0)) {
		tap_code16(KC_LEFT);
      }
      break;
    case CB_PGDNF3:
      if (pressed && layer_state_is(_NAV0)) {
 		tap_code16(KC_DOWN);
      }
      break;
    case CB_PGUPF4:
      if (pressed && layer_state_is(_NAV0)) {
		tap_code16(KC_UP);
      }
      break;
	case CB_ENDF5:
      if (pressed && layer_state_is(_NAV0)) {
		tap_code16(KC_RGHT);
      }
      break;
    case CB_CHOMEHOME:
      if (pressed && layer_state_is(_NAV0)) {
		tap_code16(LCTL(KC_LEFT));
      }
      break;
    case CB_CENDEND:
      if (pressed && layer_state_is(_NAV0)) {
 		tap_code16(LCTL(KC_RGHT));
      }
      break;
    case CB_ENTTAB:
      if (pressed && layer_state_is(_NAV0)) {
		tap_code16(LCTL(KC_ENTER));
      }
      break;

  }
}

