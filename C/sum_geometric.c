#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, r, sum;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Enter first term (a): ");
    scanf("%lf", &a);
    
    printf("Enter common ratio (r): ");
    scanf("%lf", &r);

    if (r != 1)
        sum = a * (1 - pow(r, n)) / (1 - r);
    else
        sum = a * n;  // Special case when r = 1

    printf("Sum of the geometric series: %.2f\n", sum);
    return 0;
}

