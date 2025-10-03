#include <stdio.h>

int main() {
    int matrix[3][3] = {  
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int primarySum = 0, secondarySum = 0; 

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];  // Primary diagonal (left to right)
        secondarySum += matrix[i][n - 1 - i];  // Secondary diagonal (right to left)
    }

    printf("Primary Diagonal Sum: %d\n", primarySum);
    printf("Secondary Diagonal Sum: %d\n", secondarySum);
    return 0;
}

