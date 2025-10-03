#include <stdio.h>
#include <math.h>

int main() {
    double Ax, Ay, Az, Bx, By, Bz;
    double dot_product, magnitude_A, magnitude_B, angle;

    printf("Enter components of vector A (x, y, z): ");
    scanf("%lf %lf %lf", &Ax, &Ay, &Az);

    printf("Enter components of vector B (x, y, z): ");
    scanf("%lf %lf %lf", &Bx, &By, &Bz);

    dot_product = Ax * Bx + Ay * By + Az * Bz; // Compute dot product

    magnitude_A = sqrt(Ax * Ax + Ay * Ay + Az * Az);
    magnitude_B = sqrt(Bx * Bx + By * By + Bz * Bz); // Compute magnitudes

    angle = acos(dot_product / (magnitude_A * magnitude_B)); // Compute angle in radians
    angle = angle * (180.0 / M_PI); // Convert to degrees

    printf("Angle between vectors: %.2f degrees\n", angle);
    return 0;
}

