#include <stdio.h>

int main() {
    double A1, B1, C1, A2, B2, C2;
    double D, x, y;

    printf("Enter coefficients A1, B1, C1 for first line (Ax + By + C = 0): ");
    scanf("%lf %lf %lf", &A1, &B1, &C1);

    printf("Enter coefficients A2, B2, C2 for second line (Ax + By + C = 0): ");
    scanf("%lf %lf %lf", &A2, &B2, &C2);

    D = A1 * B2 - A2 * B1; // Compute determinant

    if (D == 0) {
        if ((A1 * C2 - A2 * C1) == 0)
            printf("The lines are coincident (same line).\n");
        else
            printf("The lines are parallel.\n");
    } else {
        x = (B1 * C2 - B2 * C1) / D;
        y = (A2 * C1 - A1 * C2) / D;
        printf("Intersection Point: (%.2f, %.2f)\n", x, y);
    }

    return 0;
}

