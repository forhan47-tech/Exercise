#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("All Pairs:\n"); 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }

    return 0;
}
