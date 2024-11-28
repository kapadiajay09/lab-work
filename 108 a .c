#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[50];

    copyString(source, destination);

    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);

    return 0;
}
