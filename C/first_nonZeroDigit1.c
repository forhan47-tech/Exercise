#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No non-zero digit.\n");
        return 0;
    }

    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10; // Reverse the number to access digits from left
        num /= 10;
    }

    while (rev % 10 == 0) { // Strip trailing zeros
        rev /= 10; 
    }

    int firstNonZero = rev % 10;
    
    printf("first non-zero digit: %d\n", firstNonZero);
    return 0;
}
