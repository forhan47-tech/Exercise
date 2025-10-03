#include <stdio.h>

int main() {
    int x = 2, n = 10;
    long long result = 1, base = x;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= base; // Multiply when n is odd
        }
        base *= base;  // Square the base
        n /= 2;        // Reduce exponent
    }

    printf("%d^%d = %lld\n", x, n, result);
    return 0;
}
