#include <stdio.h>

int main() {
    int n, start, multiplier;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter starting value: ");
    scanf("%d", &start);

    printf("Enter multiplier: ");
    scanf("%d", &multiplier);

    int arr[n];
    arr[0] = start;

    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] * multiplier;
    }

    printf("Generated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
