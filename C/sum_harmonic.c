#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of the harmonic series: %.6f\n", sum);
    return 0;
}

