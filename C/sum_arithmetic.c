#include <stdio.h>

int main() {
    int n;
    double a, d, sum;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Enter first term (a): ");
    scanf("%lf", &a);

    printf("Enter common difference (d): ");
    scanf("%lf", &d);

    sum = (n / 2.0) * (2 * a + (n - 1) * d);
    
    printf("Sum of the arithmetic series: %.2f\n", sum);
    return 0;
}

