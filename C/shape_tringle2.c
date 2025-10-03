#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check for triangle validity using triangle inequality
    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Invalid triangle: violates triangle inequality.\n");
        return 1;
    }

    if (a == b && b == c) { // Type by sides
        printf("Equilateral Triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }

    float a2 = a * a, b2 = b * b, c2 = c * c; // Type by angles using Pythagorean theorem

    if (a2 + b2 == c2 || b2 + c2 == a2 || a2 + c2 == b2) {
        printf("Right-angled Triangle\n");
    } else if (a2 + b2 < c2 || b2 + c2 < a2 || a2 + c2 < b2) {
        printf("Obtuse Triangle\n");
    } else {
        printf("Acute Triangle\n");
    }

    return 0;
}
