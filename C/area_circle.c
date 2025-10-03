#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;
    
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    
    area = M_PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);

    circumference = 2 * M_PI * radius;
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}

