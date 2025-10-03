#include <stdio.h>

int main() {
    double x1, y1, x2, y2, mid_x, mid_y;

    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    mid_x = (x1 + x2) / 2; // Compute midpoint
    mid_y = (y1 + y2) / 2;

    printf("Midpoint of the line segment: (%.2f, %.2f)\n", mid_x, mid_y);
    return 0;
}

