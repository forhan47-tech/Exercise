#include <stdio.h>

int main() {
    int size = 5;

    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

