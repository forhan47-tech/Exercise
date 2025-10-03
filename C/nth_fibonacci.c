#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d: %lld\n", n, fibonacci(n));
    return 0;
}

