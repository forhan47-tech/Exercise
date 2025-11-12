#include <stdio.h>

int main() {
    int size = 5;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < size; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

