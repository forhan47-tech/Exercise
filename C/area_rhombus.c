#include <stdio.h>

int main() {
    double side, d1, d2, area, perimeter;

    printf("Enter the length of a side of the rhombus: ");
    scanf("%lf", &side);

    printf("Enter the lengths of the two diagonals (d1 and d2): ");
    scanf("%lf %lf", &d1, &d2);

    // Calculate perimeter and area
    perimeter = 4 * side;
    area = 0.5 * d1 * d2;

    printf("Perimeter of the rhombus: %.2lf\n", perimeter);
    printf("Area of the rhombus: %.2lf\n", area);
    return 0;
}

