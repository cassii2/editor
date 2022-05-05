#include "keys.h"

void keys_init() {
  raw();
  keypad(stdscr, TRUE);
}
void keys_deinit() {}
