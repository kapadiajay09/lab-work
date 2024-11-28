#include <stdio.h>

void findLengths(char *str, int *lengthWithSpaces, int *lengthWithoutSpaces) {
    *lengthWithSpaces = 0;
    *lengthWithoutSpaces = 0;

    while (*str != '\0') {
        (*lengthWithSpaces)++;
        if (*str != ' ') {
            (*lengthWithoutSpaces)++;
        }
        str++;
    }
}

int main() {
    char str[] = "Hello World";
    int lengthWithSpaces, lengthWithoutSpaces;

    findLengths(str, &lengthWithSpaces, &lengthWithoutSpaces);

    printf("Length including spaces: %d\n", lengthWithSpaces);
    printf("Length excluding spaces: %d\n", lengthWithoutSpaces);

    return 0;
}
