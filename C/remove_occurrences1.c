#include <stdio.h>

int removeOccurrences(int arr[], int n, int target) {
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != target) {
            arr[newSize++] = arr[i];
        }
    }
    return newSize;
}

int main() {
    int arr[] = {3, 1, 2, 1, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    n = removeOccurrences(arr, n, target);

    printf("Updated Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
