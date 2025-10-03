#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check if it's a valid triangle
    if (angle1 + angle2 + angle3 != 180 || angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("Invalid triangle: angles must sum to 180° and be positive.\n");
        return 1;
    }

    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("Right-angled Triangle\n");
    } else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        printf("Obtuse Triangle\n");
    } else {
        printf("Acute Triangle\n");
    }

    return 0;
}
