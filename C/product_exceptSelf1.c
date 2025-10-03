#include <stdio.h>

void productExceptSelf(int arr[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                result[i] *= arr[j]; // Multiply all elements except arr[i]
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];

    productExceptSelf(arr, n, result);

    printf("Product array except self (Brute Force): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
