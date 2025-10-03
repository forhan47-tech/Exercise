#include <stdio.h>
#include <stdbool.h>

bool isTranspose(int A[][3], int B[][2], int rowsA, int colsA, int rowsB, int colsB) {
    if (rowsA != colsB || colsA != rowsB) return false; // Matrices must have correct dimensions

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            if (A[i][j] != B[j][i]) return false; // Check transpose condition
        }
    }
    return true;
}

int main() {
    int A[][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[][2] = {{1, 4}, {2, 5}, {3, 6}};

    if (isTranspose(A, B, 2, 3, 3, 2))
        printf("Matrix B is the transpose of Matrix A\n");
    else
        printf("Matrix B is NOT the transpose of Matrix A\n");

    return 0;
}
