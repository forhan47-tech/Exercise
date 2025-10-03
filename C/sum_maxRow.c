#include <stdio.h>

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    int rows = 3, cols = 3; 
    int maxSum = 0; 

    for (int i = 0; i < rows; i++) {
        int rowSum = 0; // Initialize row sum      
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j]; // Add row elements
        }

        if (rowSum > maxSum) {
            maxSum = rowSum; // Update max row sum
        }
    }

    printf("Maximum row sum: %d\n", maxSum);
    return 0;
}

