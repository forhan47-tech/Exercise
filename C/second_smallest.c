#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = arr[0], second = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second || second == -1) {
            second = arr[i];
        }
    }

    printf("Second smallest element: %d\n", second);
    return 0;
}
