#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Factorial Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %d  ", i, factorial(i));
    }
    printf("\n");

    return 0;
}

