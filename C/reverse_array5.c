#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    if (start >= end)  // Base case
        return;

    int temp = arr[start];
    arr[start] = arr[end]; // Swap elements
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1); // Recursive call with updated indices
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, size - 1);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

