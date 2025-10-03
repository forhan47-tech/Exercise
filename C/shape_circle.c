#include <stdio.h>
#include <math.h>

int main() {
    double x, y, h, k, r, distance;

    printf("Enter coordinates of a point on the shape (x, y): ");
    scanf("%lf %lf", &x, &y);

    printf("Enter center (h, k) and radius r of the shape: ");
    scanf("%lf %lf %lf", &h, &k, &r);

    // Compute distance from center
    distance = sqrt(pow(x - h, 2) + pow(y - k, 2));

    if (fabs(distance - r) < 1e-6)
        printf("The shape is a Circle.\n");
    else
        printf("The shape is NOT a Circle.\n");

    return 0;
}

