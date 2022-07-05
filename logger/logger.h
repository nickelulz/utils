#pragma once

#define LEVEL_NONE -1
#define LEVEL_INFO 0
#define LEVEL_ERROR 1
#define LEVEL_WARN 2
#define LEVEL_DEBUG 3
#define LEVEL_ALL 4

/**
 * Highest level to output to.
 * Set to 'ALL' automatically.
 * Outputs all levels below it.
 * Levels:
 * 'INFO' (0), 'ERROR' (1), 'WARN' (2),
 * 'DEBUG' (3), 'ALL' (4)
 */
#define OUTPUT_LEVEL LEVEL_NONE

void LOG_ERROR(const char* message, ...);
void LOG_INFO(const char* message, ...);
void LOG_DEBUG(const char* message, ...);
void LOG_WARN(const char* message, ...);
