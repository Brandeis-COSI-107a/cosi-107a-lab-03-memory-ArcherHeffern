#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prints the low-order 8 bits for each number on the command line

int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) {
        long number = strtol(argv[i], NULL, 0) & 255;
        printf("%d 0x%.2lX %3ld\n", i, number, number);
    }
}