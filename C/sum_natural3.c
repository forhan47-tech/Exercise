#include <stdio.h>

int sumNatural(int n) {
    if (n == 0) return 0;  // Base case
    return n + sumNatural(n - 1);  
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is %d\n", n, sumNatural(n));
    return 0;
}

