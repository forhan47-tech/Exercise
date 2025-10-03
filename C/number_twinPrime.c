#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printTwinPrimes(int n) {
    for (int num = 2; num <= n - 2; num++) {
        if (isPrime(num) && isPrime(num + 2)) {
            printf("(%d, %d)\n", num, num + 2);
        }
    }
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Twin primes below %d:\n", n);
    printTwinPrimes(n);
    return 0;
}
