#include "graphics.h"
#include <curses.h>

WINDOW *mainwin = NULL;
WINDOW *statuswin = NULL;

int statusHeight = 2;

void graphics_init() {
  // set up basics for ncurses
  initscr();
  start_color();
  noecho();

  // set up the main window for editing
  mainwin = newwin(getmaxy(stdscr), getmaxx(stdscr), 2, 0);
  statuswin = newwin(2, getmaxx(stdscr), 0, 0);
}
void graphics_deinit() {
  delwin(mainwin);
  endwin();
}

int _refresh() {
  refresh();
  return 0;
}
