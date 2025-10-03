#include <stdio.h>

int main() {
    float base, height, side, area, perimeter;
    
    printf("Enter base: ");
    scanf("%f", &base);
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    printf("Enter side length: ");
    scanf("%f", &side);
    
    area = base * height;
    perimeter = 2 * (base + side);
    
    printf("Area of the parallelogram: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);   
    return 0;
}

