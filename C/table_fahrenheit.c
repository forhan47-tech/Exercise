#include <stdio.h>

int main() {
    printf(" Celsius (°C)  |  Fahrenheit (°F)\n");
    printf("----------------+------------------\n");
    for (int c = 0; c <= 150; c += 10) {
        float f = c * 9.0 / 5.0 + 32.0;
        printf("     %3d       |      %6.1f\n", c, f);
    }

    return 0;
}
