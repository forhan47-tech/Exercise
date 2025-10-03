#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double s, perimeter, area;

    printf("Enter number of sides (n): ");
    scanf("%d", &n);

    printf("Enter length of each side (s): ");
    scanf("%lf", &s);

    // Compute perimeter
    perimeter = n * s;

    // Compute area using trigonometry
    area = (n * s * s) / (4 * tan(M_PI / n));

    printf("Perimeter of the regular polygon: %.2f\n", perimeter);
    printf("Area of the regular polygon: %.2f\n", area);
    return 0;
}

