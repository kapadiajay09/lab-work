#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    double sum = 0.0;
    for (int i = 1; i <= N; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += (double)i / fact;
        printf("+%d/%d",i,fact);
    }

    printf("\nThe sum of the series is: %f\n", sum);

    return 0;
}