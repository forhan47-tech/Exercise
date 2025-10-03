#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, x0, y0, distance;

    printf("Enter coefficients of line (A, B, C) for Ax + By + C = 0: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    printf("Enter coordinates of the point (x0, y0): ");
    scanf("%lf %lf", &x0, &y0);

    distance = fabs(A * x0 + B * y0 + C) / sqrt(A * A + B * B); // Compute distance using formula

    printf("Shortest distance between the point and the line: %.2f\n", distance);
    return 0;
}

