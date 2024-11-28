#include <stdio.h>

void concatenateStrings(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0'; // Null-terminate the concatenated string
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";

    concatenateStrings(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}
