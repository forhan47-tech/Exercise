#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral Triangle\n");
        area = (sqrt(3) / 4) * a * a;
    } else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        printf("Scalene Triangle\n");
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    printf("Area: %.2f\n", area);
    return 0;
}

