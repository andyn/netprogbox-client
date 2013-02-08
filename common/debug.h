#ifndef DEBUG_H
#define DEBUG_H
/*
 * Miscellaenous debug utilities
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * @short Print a warning message to stderr.
 * Prints a warning message to the standard error stream and continues.
 * @param string The warning string to print. Is prefixed by "Warning: "
 */
void warn(const char *string);

/**
 * @short Print a warning message to stderr and abort.
 * Print an error message to the standard error stream and abort.
 * For use in those severe situations where continuing is not feasible
 * @param string The error string to print. Is prefixed by "Fatal error: "
 */
void fail(const char *string);

#endif // DEBUG_H
