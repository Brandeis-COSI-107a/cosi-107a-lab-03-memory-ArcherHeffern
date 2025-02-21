#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define BITS_WIDTH 48
#define INPUT_BASE 10

int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) {
        long number = strtol(argv[i], NULL, INPUT_BASE);
        printf("0x%.*lX\n", BITS_WIDTH/4, number);
    }
}