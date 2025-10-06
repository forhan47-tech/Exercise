#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void permuteArray(int arr[], int l, int r) {
    if (l == r) {
        for (int i = 0; i <= r; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(&arr[l], &arr[i]);
        permuteArray(arr, l + 1, r);
        swap(&arr[l], &arr[i]);  // backtrack
    }
}

int main() {
    int data[] = {1, 2, 3};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Permutations of the array:\n");
    permuteArray(data, 0, size - 1);

    return 0;
}
