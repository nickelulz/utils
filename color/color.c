#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "logger.h"
#include "color.h"

// Buffer of 20 to account for ~10 chars
// of ANSI escape around each text set.
#define BUFSIZE 20

char* ansi_wrapf(const char* color, const char* text) {
    char* buffer = malloc(sizeof(char) * strlen(text) + BUFSIZE);
    sprintf(buffer, "%s%s%s", color, text, ANSI_COLOR_RESET);
    return buffer;
}
