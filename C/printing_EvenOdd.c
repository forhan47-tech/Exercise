#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int odd[size], even[size]; // Arrays for odd and even numbers
    int oddIndex = 0, evenIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex++] = arr[i]; // Store even numbers
        } else {
            odd[oddIndex++] = arr[i]; // Store odd numbers
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}
