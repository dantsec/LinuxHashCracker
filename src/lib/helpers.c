#include <stdio.h>
#include <stdlib.h>

#include "../include/helpers.h"
#include "../include/constants.h"

void fatal(char *msg) {
    fprintf(stderr, RED "[ERROR]: %s\n", msg);
    exit(1);
}

void usage(void) {
    fatal(" \
        Use valid arguments.\n \
        [!] Usage: ./crack <wordlist_path> \
    ");
}
