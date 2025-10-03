#include <stdio.h>

int main() {
    int arr[] = {1, 2, 1, 3, 1, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int value = 1; // Element to remove
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[newSize++] = arr[i]; // Shift elements left when a match is found
        }
    }

    printf("Array after removing %d: ", value);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

