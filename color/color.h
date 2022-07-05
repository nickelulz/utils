#pragma once

#include <stdarg.h>

// CLI Coloring
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

char* ansi_wrapf(const char* code, const char* text);

#define ansi_green(text)   ansi_wrapf(ANSI_COLOR_GREEN,    text)
#define ansi_red(text)     ansi_wrapf(ANSI_COLOR_RED,      text)
#define ansi_yellow(text)  ansi_wrapf(ANSI_COLOR_YELLOW,   text)
#define ansi_blue(text)    ansi_wrapf(ANSI_COLOR_BLUE,     text)
#define ansi_magenta(text) ansi_wrapf(ANSI_COLOR_MAGENTA,  text)
#define ansi_cyan(text)    ansi_wrapf(ANSI_COLOR_CYAN,     text)
