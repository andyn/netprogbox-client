#ifndef DEBUG_H
#define DEBUG_H
/*
 * Miscellaenous debug utilities
 */

#include <stdlib.h>
#include <stdio.h>

void warn(const char *string) {
    fprintf(stderr, "Warning: %s\n", string);
}

void fail(const char *string) /* _Noreturn */ /* C11 */ {
    fprintf(stderr, "Fatal error: %s", string);
    abort();
}

#endif // DEBUG_H
