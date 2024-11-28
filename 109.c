#include <stdio.h>

int main() {
    int var = 10; // Normal variable
    int *ptr = &var; // Pointer initialized with the address of the variable

    printf("Original value of var: %d\n", var);

    // Modify the value using the pointer
    *ptr = 20;

    printf("Modified value of var: %d\n", var);

    return 0;
}
