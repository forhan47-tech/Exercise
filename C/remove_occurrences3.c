#include <stdio.h>

int removeFirstOccurrence(int arr[], int size, int target) {
    int i, found = 0;

    for (i = 0; i < size; i++) {
        if (!found && arr[i] == target) {
            found = 1;  // Mark that we've found the first match
        }
        if (found && i < size - 1) {
            arr[i] = arr[i + 1];  // Shift left
        }
    }

    return found ? size - 1 : size;  // Return new size
}

int main() {
    int arr[] = {3, 5, 3, 7, 9, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    size = removeFirstOccurrence(arr, size, target);

    printf("Array after removing first occurrence of %d:\n", target);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
