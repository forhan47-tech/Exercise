
#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    bool ascending = true, descending = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) ascending = false;
        if (arr[i] < arr[i + 1]) descending = false;
    }

    if (ascending) 
       printf("The array is sorted in ascending order.\n");
    else if (descending) 
       printf("The array is sorted in descending order.\n");
    else 
       printf("The array is NOT sorted.\n");

    return ascending || descending;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    isSorted(arr, n);
    return 0;
}
