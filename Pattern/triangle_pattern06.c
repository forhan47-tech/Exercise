#include <stdio.h>

int main() {
    int rows = 5;

    // Upper Left-Angled Triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("  "); // Printing spaces
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower Inverted Left-Angled Triangle (Fixed)
    for (int i = rows - 2; i >= 0; i--) {  
        for (int j = 0; j < rows - i; j++) {
            printf("  "); // Printing spaces
        }
        for (int k = 0; k <= i; k++) { 
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

