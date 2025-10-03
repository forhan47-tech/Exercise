#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, slant_height, surface_area, volume;
    
    printf("Enter radius of the cone: ");
    scanf("%f", &radius);
    
    printf("Enter height of the cone: ");
    scanf("%f", &height);
    
    slant_height = sqrt(radius * radius + height * height);  // Pythagorean theorem
    
    surface_area = M_PI * radius * (radius + slant_height); // Surface area of the cone
    volume = (M_PI * radius * radius * height) / 3; // Volume of the cone
    
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);  
    return 0;
}

