#include <stdio.h>

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {  // Find largest element
                maxIndex = j;
            }
        }

        int temp = arr[maxIndex]; // Swap largest element with first element
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortDescending(arr, n);

    printf("Sorted array in descending order: ");
    printArray(arr, n);
    return 0;
}
