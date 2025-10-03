#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[100], size = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            result[size++] = arr[i];
        }
    }

    printf("Array after removing adjacent duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
