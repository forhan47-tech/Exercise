#include <stdio.h>

int main() {
    float base1, base2, height, side1, side2, area, perimeter;
    
    printf("Enter base1: ");
    scanf("%f", &base1);
    
    printf("Enter base2: ");
    scanf("%f", &base2);
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    printf("Enter side1: ");
    scanf("%f", &side1);
    
    printf("Enter side2: ");
    scanf("%f", &side2);
    
    area = 0.5 * (base1 + base2) * height;
    perimeter = base1 + base2 + side1 + side2;
    
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);  
    return 0;
}

