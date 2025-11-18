#include <stdio.h>

int main() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < size; k++) {
            if (k == 0 || k == size - 1 || i == 0 || i == size - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

