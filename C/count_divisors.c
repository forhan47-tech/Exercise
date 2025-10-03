#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Divisors of %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    printf("\nTotal divisors: %d\n", count);

    if (count == 2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
