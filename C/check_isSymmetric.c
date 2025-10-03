#include <stdio.h>

int main() {
    int matrix[][] = {  
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);
    bool isSymmetric = true;

    for (int i = 0; i < size; i++) { // Checking Symmetric Matrix
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
            }
        }
    }

    if (isSymmetric) {
        printf("This is a Symmetric Matrix.\n");
    } else {
        printf("This is NOT a Symmetric Matrix.\n");
    }

    return 0;
}

