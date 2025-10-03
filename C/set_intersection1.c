#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 5, 8};
    
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    printf("Intersection: ");   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}

