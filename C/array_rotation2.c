#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    // Left rotate by d positions
    for (int i = 0; i < d; i++) {
        int first = arr[0]; // Store first element
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1]; // Shift elements left
        }
        arr[n - 1] = first; // Move first element to end
    }

    printf("Left rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

