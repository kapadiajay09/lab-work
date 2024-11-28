#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter a list of numbers (enter a negative number to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        sum += num;
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}