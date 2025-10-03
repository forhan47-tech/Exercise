#include <stdio.h>

int main() {
    double a1, b1, c1, a2, b2, c2, D, Dx, Dy, x, y;

    printf("Enter coefficients a1, b1, and c1 for the first equation: ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);
    
    printf("Enter coefficients a2, b2, and c2 for the second equation: ");
    scanf("%lf %lf %lf", &a2, &b2, &c2);

    // Compute determinants
    D = (a1 * b2) - (b1 * a2);
    Dx = (c1 * b2) - (b1 * c2);
    Dy = (a1 * c2) - (c1 * a2);

    // Check for unique solution
    if (D != 0) {
        x = Dx / D;
        y = Dy / D;
        printf("Solution: x = %.2f, y = %.2f\n", x, y);
    } else {
        printf("No unique solution exists (determinant is zero).\n");
    }

    return 0;
}

