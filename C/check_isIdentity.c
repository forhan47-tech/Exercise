#include <stdio.h>

int main() {
    int matrix[][] = { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);
    bool isIdentity = true;

    for (int i = 0; i < size; i++) { // Checking Identity Matrix
        for (int j = 0; j < size; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                isIdentity = false;
            }
        }
    }

    if (isIdentity) {
        printf("This is an Identity Matrix.\n");
    } else {
        printf("This is NOT an Identity Matrix.\n");
    }

    return 0;
}

