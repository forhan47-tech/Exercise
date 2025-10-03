#include <stdio.h>

void findSubsequences(int arr[], int n) {
    int total = 1 << n; // 2^n subsequences

    printf("Subsequences:\n");
    for (int i = 0; i < total; i++) { 
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) // Check if j-th bit is set
                printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findSubsequences(arr, n);
    return 0;
}
