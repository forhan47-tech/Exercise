#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];  // Final merged array
    int i = 0, j = 0, k = 0;

    while (i < n1) {
        merged[k++] = arr1[i++]; // Copy elements from arr1
    }

    while (j < n2) {
        merged[k++] = arr2[j++]; // Copy elements from arr2
    }

    printf("Merged Array: ");
    for (int x = 0; x < (n1 + n2); x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
