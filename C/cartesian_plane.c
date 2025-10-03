#include <stdio.h>

int main() {
    float x, y;

    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("1st Quadrant\n");
    else if (x < 0 && y > 0)
        printf("2nd Quadrant\n");
    else if (x < 0 && y < 0)
        printf("3rd Quadrant\n");
    else if (x > 0 && y < 0)
        printf("4th Quadrant\n");
    else if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x == 0)
        printf("On Y-axis\n");
    else if (y == 0)
        printf("On X-axis\n");

    return 0;
}
