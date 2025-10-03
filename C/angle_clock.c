#include <stdio.h>
#include <math.h>

int main() {
    int h, m;
    float hour_angle, minute_angle, angle;

    printf("Enter hours (1-12): ");
    scanf("%d", &h);
    printf("Enter minutes (0-59): ");
    scanf("%d", &m);

    if (h < 1 || h > 12 || m < 0 || m > 59) {
        printf("Invalid time input.\n");
        return 1;
    }

    hour_angle = 30 * h + 0.5 * m;   // Each hour = 30°, each minute adds 0.5°
    minute_angle = 6 * m;               // Each minute = 6°

    angle = fabs(hour_angle - minute_angle);

    if (angle > 180)
        angle = 360 - angle;

    printf("Angle between hour and minute hands = %.2f degrees\n", angle);
    return 0;
}
