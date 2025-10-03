#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, power = 0;

    printf("Enter a octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        int lastDigit = octal % 10;  // Extract last digit
        decimal += lastDigit * pow(8, power);  // Multiply by power of 8
        octal /= 10;  // Remove last digit
        power++;  // Increase power
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
