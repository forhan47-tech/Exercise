#include <stdio.h>

int replaceFirstOccurrence(int arr[], int size, int oldVal, int newVal) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == oldVal) {
            arr[i] = newVal;
            return 1;  // Replacement successful
        }
    }
    return 0;  // Value not found
}

int main() {
    int arr[] = {3, 5, 3, 7, 9, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int oldVal = 5;
    int newVal = 99;

    replaceFirstOccurrence(arr, size, oldVal, newVal);

    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
