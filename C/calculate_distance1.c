#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;
    
    printf("Enter first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Calculate distance

    printf("Distance: %.2f\n", distance);
    return 0;
}

