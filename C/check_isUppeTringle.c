#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = {  
        {1, 0, 0},
        {4, 5, 0},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);  
    bool isUpperTriangular = true;

    for (int i = 0; i < size; i++) { // Checking Upper Triangular Matrix
        for (int j = 0; j < size; j++) {
            if (j < i && matrix[i][j] != 0) {
                isUpperTriangular = false;
            }
        }
    }

    if (isUpperTriangular) {
        printf("This is an Upper Triangular Matrix.\n");
    } else {
        printf("This is NOT an Upper Triangular Matrix.\n");
    }

    return 0;
}

