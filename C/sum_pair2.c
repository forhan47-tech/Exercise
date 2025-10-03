#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            break; 
        } else if (sum < target) {
            left++;  // Increase sum by moving left pointer forward
        } else {
            right--; // Decrease sum by moving right pointer backward
        }
    }

    return 0;
}
