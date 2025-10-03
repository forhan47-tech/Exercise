#include <stdio.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 8, 9};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    return 0;
}

