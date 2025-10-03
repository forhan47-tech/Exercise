#include <stdio.h>

int search2D(const int arr[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                printf("Found at [%d][%d]\n", i, j);
                return 1;
            }
        }
    }
    printf("Not found\n");
    return 0;
}

int main() {
    int matrix[3][100] = {
        {5, 8, 12},
        {7, 3, 9},
        {0, 6, 4}
    };

    int target = 3;  
    search2D(matrix, 3, 3, target); 
    return 0;
}
