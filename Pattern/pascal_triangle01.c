#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute binomial coefficient
long long binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%4d", binomialCoeff(i, k));
        }
        printf("\n");
    }
    return 0;
}

