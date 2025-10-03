#include <stdio.h>

int main() {
    double side1, side2, side3, side4, angle;

    printf("Enter the four sides of the shape: ");
    scanf("%lf %lf %lf %lf", &side1, &side2, &side3, &side4);

    printf("Enter an angle of the shape (degrees): ");
    scanf("%lf", &angle);

    // Check rectangle conditions
    if (side1 == side3 && side2 == side4 && angle == 90)
        printf("The shape is a Rectangle.\n");
    else
        printf("The shape is NOT a Rectangle.\n");
    
    return 0;
}

