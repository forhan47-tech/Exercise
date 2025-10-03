#include <stdio.h>
#include <stdbool.h>

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        bool swapped = false;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
            swapped = true;
        }
        arr[j + 1] = key;

        if (!swapped) break; // Stop if already sorted
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {90, 85, 75, 60, 45, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSortDescending(arr, n);

    printf("Sorted array in descending order: ");
    printArray(arr, n);
    return 0;
}
