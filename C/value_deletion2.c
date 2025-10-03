#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 30;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            found = 1;
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1]; // Shift elements left
            }
            size--;
            break;  // Remove only first occurrence
        }
    }

    if (found) {
        printf("Array after deleting %d:\n", value);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Value %d not found in array.\n", value);
    }

    return 0;
}
