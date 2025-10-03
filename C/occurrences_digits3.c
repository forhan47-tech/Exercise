#include <stdio.h>
#include <stdlib.h>

int findLastOccurrenceOfDigit(long long num, int digit) {
    int position = 0;
    int lastPosition = -1;

    if (num < 0) num = -num;

    while (num > 0) {
        if (num % 10 == digit)
            lastPosition = position;
        num /= 10;
        position++;
    }

    return lastPosition; // -1 if not found
}

int main() {
    long long num;
    int digit = 3;

    printf("Enter a number: ");
    scanf("%lld", &num);

    int index = findLastOccurrenceOfDigit(num, digit);

    if (index != -1)
        printf("Digit %d last appears at position %d (from right).\n", digit, index);
    else
        printf("Digit %d not found in the number.\n", digit);

    return 0;
}
