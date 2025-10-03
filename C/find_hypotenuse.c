#include <stdio.h>
#include <math.h>

int main() {
    double a, b, hypotenuse;
    
    printf("Enter length of side a: ");
    scanf("%lf", &a);

    printf("Enter length of side b: ");
    scanf("%lf", &b);
    
    hypotenuse = sqrt(a * a + b * b);
    
    printf("Hypotenuse: %.2f\n", hypotenuse);  
    return 0;
}

