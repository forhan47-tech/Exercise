#include <stdio.h>
#include <stdlib.h>

int findFirstOccurrenceOfDigit(long long num, int digit) {
    int position = 0;

    if (num < 0) num = -num;

    while (num > 0) {
        if (num % 10 == digit)
            return position;
        num /= 10;
        position++;
    }

    return -1; // Digit not found
}

int main() {
    long long num;
    int digit = 3;

    printf("Enter a number: ");
    scanf("%lld", &num);

    int index = findFirstOccurrenceOfDigit(num, digit);

    if (index != -1)
        printf("Digit %d first appears at position %d (from right).\n", digit, index);
    else
        printf("Digit %d not found in the number.\n", digit);

    return 0;
}
