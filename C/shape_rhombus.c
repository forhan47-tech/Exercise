#include <stdio.h>

int main() {
    double side1, side2, side3, side4, angle1, angle2;

    printf("Enter the four sides of the shape: ");
    scanf("%lf %lf %lf %lf", &side1, &side2, &side3, &side4);

    printf("Enter two opposite angles: ");
    scanf("%lf %lf", &angle1, &angle2);

    // Check rhombus conditions
    if (side1 == side2 && side2 == side3 && side3 == side4 && angle1 == angle2 && angle1 != 90)
        printf("The shape is a Rhombus.\n");
    else
        printf("The shape is NOT a Rhombus.\n");

    return 0;
}

