#include <stdio.h>

int main() {
    float side, area, perimeter;
    
    printf("Enter side: ");
    scanf("%f", &side);
    
    area = side * side;
    perimeter = 4 * side;
    
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter); 
    return 0;
}

