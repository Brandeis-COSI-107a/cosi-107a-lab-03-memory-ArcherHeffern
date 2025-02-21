#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uninitialized_variable;
int function() {}

int main() {
    int stack_variable = 5;
    char* string_constant = "Hello world";

    printf("Stack Variable Address:         0x%.12X\n", &stack_variable);
    printf("String Constant Address:        0x%.12X\n", string_constant);
    printf("Uninitialized Variable Address: 0x%.12X\n", &uninitialized_variable);
    printf("Main Function Address:          0x%.12X\n", main);
    printf("Random Function Address:        0x%.12X\n", function);
}