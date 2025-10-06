#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 1};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int printed[1000] = {0};  

    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && !printed[arr[i]]) {
                printf("%d ", arr[i]);
                printed[arr[i]] = 1;  // Mark as printed
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
