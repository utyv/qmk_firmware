#include "mods.h"

enum mod_flag {
	FLAG_SFL = 0x0001,
	FLAG_SFR = 0x0002,
	FLAG_SFT = 0x0004,
	FLAG_CLL = 0x0008,
	FLAG_CLR = 0x0010,
	FLAG_CTL = 0x0020,
	FLAG_LRL = 0x0040,
	FLAG_LRR = 0x0080,
	FLAG_ALT = 0x0100, 
	FLAG_PHO = 0x0200, 
};

uint16_t mods = 0;

bool is_shift(void) {
	return mods & (FLAG_SFL | FLAG_SFR);
}

void shift_on(void) {
	if (! (mods & FLAG_SFT)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LSFT));
		wait_ms(MOD_DELAY);
		mods |= FLAG_SFT;
	}
}

void shift_off(void) {
	if (mods & FLAG_SFT) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LSFT));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_SFT;
	}
}

bool is_ctl(void) {
	return mods & (FLAG_CLL | FLAG_CLR);
}

void ctl_on(void) {
	if (!(mods & FLAG_CTL)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LCTL));
		wait_ms(MOD_DELAY);
		mods |= FLAG_CTL;
	}
}

void ctl_off(void) {
	if (mods & FLAG_CTL) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LCTL));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_CTL;
	}
}

bool is_layer(void) {
	return mods & (FLAG_LRL | FLAG_LRL);
}

bool is_alt(void) {
	return	mods & FLAG_ALT;
}

void alt_on(void) {
	
	if (!(mods & FLAG_ALT)) {

		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LEFT_ALT));
		wait_ms(MOD_DELAY);
		mods |= FLAG_ALT;
	}
}

void alt_off(void) {

	if (mods & FLAG_ALT) {
		
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LEFT_ALT));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_ALT;
		
	}
}

bool is_phonetic(void) {
	return mods & FLAG_PHO;
}

void phonetic_on(void) {
	if (!(mods & FLAG_PHO)) {
		mods |= FLAG_PHO;
	}
}

void phonetic_off(void) {
	if (mods & FLAG_PHO) {
		mods &= ~FLAG_PHO;
	}
}
	
void reset_mods(void) {
	if (!is_shift()) {
		shift_off();
	}
	if (!is_ctl()) {
		ctl_off();
	}
	alt_off();

	if (is_shift()) {
		shift_on();
	}
	if (is_ctl()) {
		ctl_on();
	}
}

bool process_mods(uint16_t keycode, bool pressed) {

	if (!(keycode >= CLL && keycode <= CLR)) {
		return true;
	}	
	
	if (pressed) {
		switch (keycode) {
			//case CLL:
			//	mods |= FLAG_CLL;
			//break;
			//case CLR:
			//	mods |= FLAG_CLR;
			//break;
			case SFL:
				mods |= FLAG_SFL;
			break;
			case SFR:
				mods |= FLAG_SFR;
			break;
			break;
			case LRL:
				mods |= FLAG_LRL;
				mods |= FLAG_CLL;
			break;
			case LRR:
				mods |= FLAG_LRR;
				mods |= FLAG_CLR;
			break;
		}
	} else {
		switch (keycode) {
			//case CLL:
			//	mods &= ~FLAG_CLL;
			//break;
			//case CLR:
			//	mods &= ~FLAG_CLR;
			//break;
			case SFL:
				mods &= ~FLAG_SFL;
			break;
			case SFR:
				mods &= ~FLAG_SFR;
			break;
			break;
			case LRL:
				mods &= ~FLAG_LRL;
				mods &= ~FLAG_CLL;
			break;
			case LRR:
				mods &= ~FLAG_LRR;
				mods &= ~FLAG_CLR;
			break;
		}
	}
	
	reset_mods();
	
	return false;
}