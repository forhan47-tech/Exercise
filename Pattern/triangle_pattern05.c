#include <stdio.h>

int main() {
    int rows = 5;

    // Right-Angled Triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Inverted Right-Angled Triangle
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

