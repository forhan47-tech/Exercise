#include <stdio.h>

int main() {
    int n;
    double a, d;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Enter first term (a): ");
    scanf("%lf", &a);

    printf("Enter common difference (d): ");
    scanf("%lf", &d);

    printf("Arithmetic Series: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a + i * d);
    }    
    printf("\n");   
    return 0;
}

