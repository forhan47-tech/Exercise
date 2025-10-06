#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 1};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0}; // Assuming elements range within [0,99]

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; // Count occurrences
    }

    printf("Unique elements: ");
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) { // If element appears only once
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
