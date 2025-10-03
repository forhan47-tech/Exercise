#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // Avoid counting the same duplicate multiple times
            }
        }
    }

    printf("Number of duplicate elements: %d\n", count);
    return 0;
}
