#include <stdio.h>

int main() {
    float length, width, area, perimeter;
    
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    area = length * width;
    printf("Area of the rectangle: %.2f\n", area); 
    return 0;
}

