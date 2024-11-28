#include <stdio.h>
#include <stdbool.h>

int countWords(char *str) {
    int count = 0;
    bool inWord = false;

    while (*str != '\0') {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[] = "Hello, how are you doing today?";
    int wordCount = countWords(str);

    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}
