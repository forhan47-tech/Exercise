#include <stdio.h>

int main() {
    int size = 5;
    
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
