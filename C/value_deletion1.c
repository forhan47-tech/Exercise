#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int num = 8; 
    int found = 0,index;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            index = i; // Store the index of the first occurrence
            found = 1;
            break; 
        }
    }

    if (found) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Shift elements left
        }
        size--; // Reduce array size
    }

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
