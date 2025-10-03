#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 99;
    int index = 2;  // Insert at index 2 (0-based)

    if (index < 0 || index > size) {
        printf("Invalid index\n");
        return 1;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }

    arr[index] = value;
    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
