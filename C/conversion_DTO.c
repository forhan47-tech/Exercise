#include <stdio.h>

int main() {
    int decimal, octal[32], index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        octal[index++] = decimal % 8;  // Store remainder
        decimal /= 8;  // Divide by 8
    }

    printf("Octal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
    return 0;
}
