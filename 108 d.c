#include <stdio.h>

void reverseString(char *str) {
    int length = 0;
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0') {
        end++;
        length++;
    }
    end--;

    for (int i = 0; i < length / 2; i++) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
