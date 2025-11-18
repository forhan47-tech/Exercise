#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int coef = 1;

        // Print leading spaces for alignment
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");

        // Print Pascal's Triangle values
        for (int k = 0; k <= i; k++) {
            printf("%4d", coef);
            coef = coef * (i - k) / (k + 1);
        }
        printf("\n");
    }

    return 0;
}
