#pragma once

const uint8_t *find_word16(uint16_t chorde, const uint8_t *dict);
uint8_t type_word(const uint8_t *dict, bool caps_first, bool caps_all, bool do_ctl_off);
void add_undo(uint8_t type_count);
void undo(void);
void clear_undo_history(void);
