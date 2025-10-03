#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, r;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Enter first term (a): ");
    scanf("%lf", &a);

    printf("Enter common ratio (r): ");
    scanf("%lf", &r);

    printf("Geometric Series: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a * pow(r, i));
    }
    printf("\n");
    return 0;
}

