
#include <stdio.h>

int main() {
    int arr[] = {45, 12, 78, 3, 56, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int pos = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }

    printf("Largest number is %d at position %d\n", max, pos);
    return 0;
}
