#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, s, area, perimeter;
    
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Apply Heron's Formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle: %.2f\n", area);

    perimeter = a + b + c;
    printf("Perimeter of the triangle: %.2f\n", perimeter);
    return 0;
}

