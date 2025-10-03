#include <stdio.h>

int removeLastOccurrence(int arr[], int size, int target) {
    int index = -1;

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            index = i; // Find the last occurrence
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  // Reduce size after removal
    }

    return size;  // Return updated size
}

int main() {
    int arr[] = {3, 5, 3, 7, 9, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    size = removeLastOccurrence(arr, size, target);

    printf("Array after removing last occurrence of %d:\n", target);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
