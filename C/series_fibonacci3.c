#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int fib[n]; 
    fib[0] = 0;  // First Fibonacci number
    fib[1] = 1;  // Second Fibonacci number

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; 
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
    return 0;
}
