#include "multitap.h"
#include "type.h"
#include "mods.h"

bool is_multitap_active_ = false;
bool was_multitap_active_ = false;
const uint8_t *pword = 0;
uint16_t timer = 0;

#define MULTITAP_MS 80

void start_multitap(const uint8_t *pword_) {
	clear_undo_history();
	is_multitap_active_ = true;
	was_multitap_active_ = true;
	pword = pword_;
	type_word(pword, false);
	reset_mods();
}

void stop_multitap(void) {
	is_multitap_active_ = false;
	pword = 0;
}

void clear_multitap(void) {
	is_multitap_active_ = false;
	was_multitap_active_ = false;
	pword = 0;
}

bool was_multitap_active(void) {
	return was_multitap_active_;
}

void process_multitap(void) {
	if (is_multitap_active_) {
		if (timer_elapsed(timer) > MULTITAP_MS) {
			type_word(pword, false);
			reset_mods();
			timer = timer_read();
		}
	}
}