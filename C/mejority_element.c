#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            return arr[i];
        }
    }
    
    return -1;  // No majority element
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = findMajorityElement(arr, n);

    if (result != -1) {
        printf("Majority Element: %d\n", result);
    } else {
        printf("No Majority Element\n");
    }

    return 0;
}
