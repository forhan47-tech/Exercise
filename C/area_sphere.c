#include <stdio.h>
#include <math.h>

int main() {
    float radius, surface_area, volume;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    surface_area = 4 * M_PI * radius * radius; 
    volume = (4.0 / 3.0) * M_PI * radius * radius * radius; // Volume of a sphere
    
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume); 
    return 0;
}

