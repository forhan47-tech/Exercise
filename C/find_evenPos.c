#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Index for Even value:\n");
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", i);
    }

    return 0;
}
