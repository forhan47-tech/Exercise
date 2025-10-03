#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = 3;
    int sum, diagSum1 = 0, diagSum2 = 0;
    int rowSum[3] = {0}, colSum[3] = {0};

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rowSum[i] += matrix[i][j];  // Row sum
            colSum[j] += matrix[i][j];  // Column sum
            if (i == j) diagSum1 += matrix[i][j];  // Main diagonal sum
            if (i + j == size - 1) diagSum2 += matrix[i][j];  // Secondary diagonal sum
        }
    }

    sum = rowSum[0]; // Magic sum (first row sum)
    bool isMagic = 1; 

    for (int i = 0; i < size; i++) { // Check if all sums are equal
        if (rowSum[i] != sum || colSum[i] != sum) {
            isMagic = 0;
            break;
        }
    }

    if (diagSum1 != sum || diagSum2 != sum) 
            isMagic = 0;

    if (isMagic) {
        printf("This is a Magic Square.\n");
    } else {
        printf("This is NOT a Magic Square.\n");
    }

    return 0;
}

