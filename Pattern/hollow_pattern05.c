#include <stdio.h>

int main() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    for (int i = size - 2; i >= 0; i--) {
        for (int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

