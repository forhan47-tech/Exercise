#include <stdio.h>

int main() {
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int freq[100] = {0}; // Assuming elements are within 0-99 range
    int duplicateCount = 0;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; // Count frequency
    }

    for (int i = 0; i < 100; i++) {
        if (freq[i] > 1) {
            duplicateCount++; // Count duplicates
        }
    }

    printf("Number of duplicate elements: %d\n", duplicateCount);
    return 0;
}

