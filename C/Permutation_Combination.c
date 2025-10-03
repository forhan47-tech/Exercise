#include <stdio.h>

long long factorial(int num) {
    if (num <= 1) return 1; 
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    printf("nCr (Combination): %lld\n", nCr(n, r));
    printf("nPr (Permutation): %lld\n", nPr(n, r));
    return 0;
}

