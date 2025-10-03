#include <stdio.h>
#include <stdbool.h>

bool isSortedRecursive(int arr[], int n) {
    if (n == 1) return true; // Base case: Single element is always sorted
    if (arr[n - 1] < arr[n - 2]) return false; // Unsorted condition
    return isSortedRecursive(arr, n - 1); 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSortedRecursive(arr, n))
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is NOT sorted.\n");

    return 0;
}
