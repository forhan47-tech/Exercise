#include <stdio.h>

int main() {
    double x, y, x_min, y_min, x_max, y_max;

    printf("Enter coordinates of the point (x, y): ");
    scanf("%lf %lf", &x, &y);

    printf("Enter bottom-left (x_min, y_min) and top-right (x_max, y_max) of the rectangle: ");
    scanf("%lf %lf %lf %lf", &x_min, &y_min, &x_max, &y_max);

    if (x >= x_min && x <= x_max && y >= y_min && y <= y_max) // Check inside rectangle
        printf("The point is inside the rectangle/square.\n");
    else
        printf("The point is outside the rectangle/square.\n");

    return 0;
}

