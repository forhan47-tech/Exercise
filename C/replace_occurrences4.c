#include <stdio.h>

int replaceLastInArray(int arr[], int size, int oldVal, int newVal) {
    int lastIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == oldVal) lastIndex = i;
    }
    if (lastIndex != -1) {
        arr[lastIndex] = newVal;
        return 1;
    }
    return 0;
}

int main() {
    int arr[] = {3, 5, 3, 7, 9, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int oldVal = 3;
    int newVal = 99;

    replaceLastInArray(arr, size, oldVal, newVal);

    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
