#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = {  
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);
    bool isLowerTriangular = true;

    for (int i = 0; i < size; i++) { // Checking Lower Triangular Matrix
        for (int j = 0; j < size; j++) {
            if (j > i && matrix[i][j] != 0) {
                isLowerTriangular = false;
            }
        }
    }

    if (isLowerTriangular) {
        printf("This is a Lower Triangular Matrix.\n");
    } else {
        printf("This is NOT a Lower Triangular Matrix.\n");
    }

    return 0;
}

