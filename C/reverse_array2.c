#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0, j = size - 1; i < j; i++, j--) { 
        int temp = arr[i];
        arr[i] = arr[j]; // Reverse the array using two-pointer method
        arr[j] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

