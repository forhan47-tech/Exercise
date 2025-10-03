#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, power = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        int lastDigit = binary % 10;  // Extract last digit
        decimal += lastDigit * pow(2, power);  // Multiply by power of 2
        binary /= 10;  // Remove last digit
        power++;  // Increase power
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}

