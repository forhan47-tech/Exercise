#include <stdio.h>

int searchMatrix(int matrix[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target)
                return 1; // Found
        }
    }
    return 0; // Not found
}

int main() {
    int matrix[3][3] = {{77, 12, 9}, {4, 1, 5}, {6, 8, 3}};
    int target = 5;

    if (searchMatrix(matrix, 3, 3, target))
        printf("Element found in the matrix.\n");
    else
        printf("Element not found in the matrix.\n");

    return 0;
}
