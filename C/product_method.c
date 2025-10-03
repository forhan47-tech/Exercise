#include <stdio.h>

int main() {
    int a = 18, b = 25;
    int result = 0;

    while (a > 0) {
        if (a % 2 == 1) { // If 'a' is odd, add 'b' to the result
            result += b;
        }
        a /= 2; // Halve 'a' and double 'b'
        b *= 2;
    }

    printf("Product using Russian Peasant Method: %d\n", result);
    return 0;
}

