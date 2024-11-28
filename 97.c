#include <stdio.h>

int countVowels(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Note: gets() is unsafe, consider using fgets() in real applications

    int vowelCount = countVowels(str);
    printf("The number of vowels in the string is: %d\n", vowelCount);

    return 0;
}
