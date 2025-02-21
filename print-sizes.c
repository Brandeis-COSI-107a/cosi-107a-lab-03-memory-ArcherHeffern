#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 978;
    int *i_p = &i;
    char arr[200];
    char* c_p = arr;

    // char, short, int, long, long long, float, double, *char , *int , *long };
    printf("size of char is %d\n", sizeof(char));
    printf("size of short is %d\n", sizeof(short));
    printf("size of int is %d\n", sizeof(int));
    printf("size of long is %d\n", sizeof(long));
    printf("size of long long is %d\n", sizeof(long long));
    printf("size of float is %d\n", sizeof(float));
    printf("size of double is %d\n", sizeof(double));
    printf("size of char * is %d\n", sizeof(char*));
    printf("size of int * is %d\n", sizeof(int*));
    printf("size of long * is %d\n", sizeof(long*));

    printf("The size of my character array is %d\n", sizeof(arr));
    printf("The size of my character pointer is %d\n", sizeof(c_p));
    printf("The size of my int pointer is %d\n", sizeof(i_p));
    printf("The size of what my integer pointer points at is %d\n", sizeof(*i_p));
}