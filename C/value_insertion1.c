#include <stdio.h>

int main() {
    int arr[10] = {5, 3, 8, 1, 9}; 
    int size = 5, num = 7;

    arr[size] = num; // Insert at the end
    size++;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
