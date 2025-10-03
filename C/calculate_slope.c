#include <stdio.h>

int main() {
    double x1, y1, x2, y2, slope;

    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    if (x2 - x1 == 0) {
        printf("Slope is undefined (vertical line).\n");
    } else {
        slope = (y2 - y1) / (x2 - x1); // Compute slope
        printf("Slope of the line: %.2f\n", slope);
    }

    return 0;
}

