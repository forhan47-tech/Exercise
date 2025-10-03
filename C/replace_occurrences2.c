#include <stdio.h>

void replaceLastValue(int arr[], int size, int oldVal, int newVal) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == oldVal) {
            arr[i] = newVal;
            break;  // Stop after last replacement
        }
    }
}

int main() {
    int arr[] = {3, 5, 3, 7, 9, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int oldVal = 3;
    int newVal = 99;

    replaceLastValue(arr, size, oldVal, newVal);

    printf("Array after replacing last %d with %d:\n", oldVal, newVal);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
