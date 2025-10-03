#include <stdio.h>
#include <stdlib.h>

int countDigitOccurrences(long long num, int digit) {
    int count = 0;

    if (num < 0) num = -num;

    while (num > 0) {
        if (num % 10 == digit)
            count++;
        num /= 10;
    }
    
    return count;
}

int main() {
    long long num;
    int digit = 3;

    printf("Enter a number: ");
    scanf("%lld", &num);

    int count = countDigitOccurrences(num, digit);

    printf("Digit %d appears %d time(s).\n", digit, count);
    return 0;
}
