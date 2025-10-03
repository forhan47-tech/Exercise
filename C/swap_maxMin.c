#include <stdio.h>

int main() {
    int arr[] = {10, 3, 5, 8, 1, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = 0, min = 0;

    // Find indices of max and min elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max]) max = i; 
        if (arr[i] < arr[min]) min = i; 
    }

    // Swap max and min elements
    int temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    printf("Array after swapping max and min: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

