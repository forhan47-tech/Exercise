#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  // Extract last digit
        product *= digit;       // Add it to sum
        num /= 10;          // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}

