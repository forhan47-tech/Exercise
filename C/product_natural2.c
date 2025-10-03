#include <stdio.h>

int productNatural(int n) {
    if (n == 1) return 1;  // Base case
    return n * productNatural(n - 1); 
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Product of first %d natural numbers: %d\n", n, productNatural(n));
    return 0;
}

