#include "macros.h"

void process_macro(uint32_t chord) {

	switch (chord) {
		case BM(AL_1) | BM(BL_6):
			phonetic_off();
		break;
		case BM(AL_3) | BM(BL_7):
			phonetic_on();
		break;
	}
		
}