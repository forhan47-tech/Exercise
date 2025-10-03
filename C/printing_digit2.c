#include <stdio.h>

int main() {
    int num, digits[10], count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        digits[0] = 0; // Handle zero explicitly
        count = 1;
    } else {
        while (num > 0) {
            digits[count++] = num % 10; // Extract digits in reverse order
            num /= 10;
        }
    }

    printf("Digits separated by spaces: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

    printf("\n");
    return 0;
}
