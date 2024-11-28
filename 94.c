#include <stdio.h>
#include <string.h>

void copyStringReverse(char *source, char *destination) {
    int length = strlen(source);
    for (int i = 0; i < length; i++) {
        destination[i] = source[length - 1 - i];
    }
    destination[length] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Ensure this is large enough to hold the reversed string

    copyStringReverse(source, destination);

    printf("Source String: %s\n", source);
    printf("Reversed String: %s\n", destination);

    return 0;
}
