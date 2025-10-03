#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;  // Base case
    return n * factorial(n - 1);  
}

int main() {
    int num, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit); // Compute sum of factorials of digits
        num /= 10;
    }

    if (sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }

    return 0;
}

