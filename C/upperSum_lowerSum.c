#include <stdio.h>

int main() {
    int matrix[3][3] = { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = 3;  
    int upperSum = 0, lowerSum = 0;  // Variables to store sums

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            // Upper triangular condition (includes diagonal)
            if (j >= i)
                upperSum += matrix[i][j];

            // Lower triangular condition (includes diagonal)
            if (j <= i)
                lowerSum += matrix[i][j];
        }
    }

    printf("Upper Triangular Sum: %d\n", upperSum);
    printf("Lower Triangular Sum: %d\n", lowerSum);
    return 0;
}
