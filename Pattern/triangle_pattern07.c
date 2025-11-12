#include <stdio.h>

int main() {
    int rows = 5;

    // Inverted Right-Angled Triangle
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Normal Right-Angled Triangle
    for (int i = 1; i < rows; i++) { 
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

