#include <stdio.h>
#include <stdbool.h>

bool isSortedAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return false; // Found an unsorted pair
    }
    return true;
}

bool isSortedDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) return false; // Found an unsorted pair
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAscending(arr, n))
        printf("The array is sorted in ascending order.\n");
    else if (isSortedDescending(arr, n))
        printf("The array is sorted in descending order.\n");
    else
        printf("The array is NOT sorted.\n");

    return 0;
}
