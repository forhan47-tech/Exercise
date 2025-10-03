#include <stdio.h>

int main() {
    int arr1[] = {1, 2};
    int arr2[] = {3, 4};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    printf("Cartesian Product:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("(%d, %d) ", arr1[i], arr2[j]);
        }
    }
    return 0;
}

