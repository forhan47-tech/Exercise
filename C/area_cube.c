#include <stdio.h>

int main() {
    float side, surface_area, volume;
    
    printf("Enter side length: ");
    scanf("%f", &side);
    
    surface_area = 6 * side * side;
    volume = side * side * side;
    
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume); 
    return 0;
}

