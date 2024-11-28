#include <stdio.h>

void copyArrayReverse(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[size - 1 - i];
    }
}

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);
    int destinationArray[size];

    copyArrayReverse(sourceArray, destinationArray, size);

    printf("Source Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sourceArray[i]);
    }

    printf("\nDestination Array (Reversed): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
