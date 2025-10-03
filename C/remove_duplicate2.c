#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result[100];
    int freq[1000] = {0}; 
    int j = 0;

    for (int i = 0; i < size; i++) {
        int val = arr[i];
        if (freq[val] == 0) {
            result[j++] = val;
            freq[val] = 1;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
