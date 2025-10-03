#include <stdio.h>
#include <math.h>

int main() {
    double x, y, x_c, y_c, r;

    printf("Enter coordinates of the point (x, y): ");
    scanf("%lf %lf", &x, &y);

    printf("Enter center (x_c, y_c) and radius r of the circle: ");
    scanf("%lf %lf %lf", &x_c, &y_c, &r);

    double distanceSquared = pow(x - x_c, 2) + pow(y - y_c, 2); // Check inside circle
    
    if (distanceSquared < r * r)
        printf("The point is inside the circle.\n");
    else if (distanceSquared == r * r)
        printf("The point is on the circle boundary.\n");
    else
        printf("The point is outside the circle.\n");

    return 0;
}

