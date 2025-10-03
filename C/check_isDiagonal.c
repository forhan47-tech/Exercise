#include <stdio.h>

int main() {
    int matrix[][] = { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);
    bool isDiagonal = true;

    for (int i = 0; i < size; i++) { // Checking Diagonal Matrix
        for (int j = 0; j < size; j++) {
            if (i != j && matrix[i][j] != 0) {
                isDiagonal = false;
            }
        }
    }

    if (isDiagonal) {
        printf("This is a Diagonal Matrix.\n");
    } else {
        printf("This is NOT a Diagonal Matrix.\n");
    }
      
    return 0;
}

