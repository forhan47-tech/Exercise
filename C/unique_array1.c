#include <stdio.h>

int main() {
    int arr[] = {5, 3, 7, 3, 5, 7, 9}; 

    int size = sizeof(arr) / sizeof(arr[0]); 
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= arr[i];  // XOR cancels duplicates
    }

    printf("Single unique number: %d\n", unique);
    return 0;
}

