#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 5, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int i = 0, j = 0;

    printf("Intersection: ");
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    return 0;
}

