#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **a, int **b, int **result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return -1;
    }

    int **a = (int **)malloc(r1 * sizeof(int *));
    int **b = (int **)malloc(r2 * sizeof(int *));
    int **result = (int **)malloc(r1 * sizeof(int *));

    for (int i = 0; i < r1; i++) {
        a[i] = (int *)malloc(c1 * sizeof(int));
        result[i] = (int *)malloc(c2 * sizeof(int));
    }

    for (int i = 0; i < r2; i++) {
        b[i] = (int *)malloc(c2 * sizeof(int));
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    multiplyMatrices(a, b, result, r1, c1, c2);

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r1; i++) {
        free(a[i]);
        free(result[i]);
    }

    for (int i = 0; i < r2; i++) {
        free(b[i]);
    }

    free(a);
    free(b);
    free(result);

    return 0;
}
