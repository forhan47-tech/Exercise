#include <stdio.h>

int staircaseSearch(int matrix[][4], int rows, int cols, int target) {
    int row = 0, col = cols - 1; // Start at top-right corner

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target)
            return 1; // Found
        else if (matrix[row][col] > target)
            col--; // Move left
        else
            row++; // Move down
    }
    return 0; // Not found
}

int main() {
    int matrix[3][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}};
    int target = 5;

    if (staircaseSearch(matrix, 3, 4, target))
        printf("Element found in the matrix.\n");
    else
        printf("Element not found in the matrix.\n");

    return 0;
}
