#include <stdio.h>
#include <stdarg.h>
#include "color.h"
#include "logger.h"

void log_format(const char* tag, const char* message, va_list args) {
    fprintf(stderr, "[%s] ", tag);
    vfprintf(stderr, message, args);
    fprintf(stderr, "\n");
}

void LOG_ERROR(const char* message, ...) {
    if (OUTPUT_LEVEL < LEVEL_ERROR)
        return;

    va_list args;
    va_start(args, message);
    log_format(ansi_red("ERROR"), ansi_red(message), args);
    va_end(args);
}

void LOG_INFO(const char* message, ...) {
    if (OUTPUT_LEVEL < LEVEL_INFO)
        return;

    va_list args;
    va_start(args, message);
    log_format(ansi_green("INFO"), message, args);
    va_end(args);
}

void LOG_WARN(const char* message, ...) {
    if (OUTPUT_LEVEL < LEVEL_WARN)
        return;

    va_list args;
    va_start(args, message);
    log_format(ansi_yellow("WARN"), ansi_yellow(message), args);
    va_end(args);
}

void LOG_DEBUG(const char* message, ...) {
    if (OUTPUT_LEVEL < LEVEL_DEBUG)
        return;

    va_list args;
    va_start(args, message);
    log_format(ansi_cyan("DEBUG"), message, args);
    va_end(args);
}
