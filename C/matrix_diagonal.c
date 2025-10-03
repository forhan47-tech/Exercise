#include <stdio.h>

int main() {
    int matrix[][] = {  
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);

    printf("Main diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]); // Print main diagonal
    }

    printf("\nSecondary diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][size - i - 1]); // Print secondary diagonal
    }

    return 0;
}

