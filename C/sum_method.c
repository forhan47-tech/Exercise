#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform addition using bitwise operations
    while (num2 != 0) {
        int carry = num1 & num2;  // Calculate carry bits
        num1 = num1 ^ num2;  // Sum using XOR
        num2 = carry << 1;  // Shift carry bits to the left
    }

    printf("Sum: %d\n", num1);
    return 0;
}

