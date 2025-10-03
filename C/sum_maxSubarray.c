#include <stdio.h>

int maxSubarrayBruteForce(int arr[], int n) {
    int maxSum = arr[0];

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum > maxSum)
                maxSum = sum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum Subarray Sum (Brute Force): %d\n", maxSubarrayBruteForce(arr, n));
    return 0;
}
