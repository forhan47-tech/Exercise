#include <stdio.h>

void productExceptSelf(int arr[], int n, int result[]) {
    int prefix = 1, suffix = 1;
    
    for (int i = 0; i < n; i++) {
        result[i] = 1; // Initialize result array with 1
    }

    for (int i = 0; i < n; i++) {
        result[i] *= prefix;
        prefix *= arr[i]; // Compute prefix products
    }

    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= arr[i]; // Compute suffix products 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];

    productExceptSelf(arr, n, result);

    printf("Product array except self: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
