#include <stdio.h>

int main() {
    int rows = 5;
    
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

