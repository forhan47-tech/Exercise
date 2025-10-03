#include <stdio.h>

void findSubarraySum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target) {
                printf("Subarray found between indexes %d and %d\n", i, j);
                return;
            }
        }
    }
    
    printf("No subarray found\n");
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int target = 33;
    findSubarraySum(arr, n, target);   
    return 0;
}
