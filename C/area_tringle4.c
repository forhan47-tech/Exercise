#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3, area;

    printf("Enter coordinates of first vertex (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of second vertex (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Enter coordinates of third vertex (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    // Compute area using determinant formula
    area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    // Check collinearity
    if (area == 0) {
        printf("The given points are collinear.\n");
    } else {
        printf("Area of the Triangle: %.2f\n", area);
    }

    return 0;
}



