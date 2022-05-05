#include "files.h"
#include "graphics.h"
#include "keys.h"
#include <curses.h>
#include <stdio.h>
#include <stdlib.h>

void init();
void deinit();

int main(int argc, char **argv) {
  init();

  printw("Hello world!");
  refresh();
  getch();
  printw("\nX and Y size: %d, %d", getmaxx(stdscr), getmaxy(stdscr));
  refresh();
  getch();

  deinit();
}

void init() {
  graphics_init();
  keys_init();
}
void deinit() {
  graphics_deinit();
  keys_deinit();
}
