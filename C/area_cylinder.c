#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, surface_area, volume;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    surface_area = 2 * M_PI * radius * (radius + height); 
    volume = M_PI * radius * radius * height; // Volume of a cylinder
    
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume); 
    return 0;
}

