#include <stdio.h>
#include <math.h>

int main() {
    int n = 36;

    printf("Divisors of %d are: ", n);
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);           // First divisor
            if (i != n / i) {
                printf("%d ", n / i);   // Paired divisor
            }
        }
    }

    printf("\n");
    return 0;
}
