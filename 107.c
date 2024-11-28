#include <stdio.h>
#include <math.h>

int flip(int number, int n) {
    int divisor = pow(10, n);
    int lastNDigits = number % divisor;
    int remainingNumber = number / divisor;

    int reversedLastNDigits = 0;
    while (lastNDigits > 0) {
        reversedLastNDigits = reversedLastNDigits * 10 + lastNDigits % 10;
        lastNDigits /= 10;
    }

    return remainingNumber * divisor + reversedLastNDigits;
}

int main() {
    int number, n;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    int result = flip(number, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);

    return 0;
}
