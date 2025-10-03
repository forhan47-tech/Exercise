#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 5, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int result[n + m], index = 0;

    for (int i = 0; i < n; i++) {
        result[index++] = arr1[i]; // Insert elements of the first array
    }

    for (int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                isDuplicate = 1; // Insert elements of the second array, avoiding duplicates
                break;
            }
        }
        if (!isDuplicate) {
            result[index++] = arr2[i];
        }
    }

    printf("Union: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

