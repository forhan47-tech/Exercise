#include <stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, -1, -2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Odd/Even status:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] & 1) {
            printf("%d is odd\n", arr[i]);
        } else {
            printf("%d is even\n", arr[i]);
        }
    }

    return 0;
}
