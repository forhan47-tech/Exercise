#include <stdio.h>

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

