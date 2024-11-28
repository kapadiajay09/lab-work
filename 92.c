#include <stdio.h>

int findLargest(int *arr, int size) {
    int *largest = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *largest) {
            largest = arr + i;
        }
    }
    return *largest;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);
    printf("The largest number is: %d\n", largest);

    return 0;
}
