#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;  // Target found at index i
    }
    return -1;  // Target not found
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int index = linearSearch(arr, size, target);
    
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found!\n");

    return 0;
}
