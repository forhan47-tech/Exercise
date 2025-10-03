#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    int pos = 0;

    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
            pos = i;
        }
    }

    printf("Smallest element = %d at index %d\n", min, pos);
    return 0;
}
