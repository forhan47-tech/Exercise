#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    // Right rotate by d positions
    for (int i = 0; i < d; i++) { 
        int last = arr[n - 1]; // Store last element
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1]; // Shift elements right
        }
        arr[0] = last; // Move last element to front
    }

    printf("Right rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

