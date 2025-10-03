#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int start = 0, end = size - 1; 

    while (start < end) { // Reverse the array using swapping
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

