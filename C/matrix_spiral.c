#include <stdio.h>

int main() {
    int matrix[3][3] = { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int rows = 3, cols = 3;  
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    printf("Spiral order: ");
    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++; // Traverse from left to right (Top Row)

        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--; // Traverse from top to bottom (Right Column)

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--; // Traverse from right to left (Bottom Row)
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++; // Traverse from bottom to top (Left Column)
        }
    }

    printf("\n");
    return 0;
}

