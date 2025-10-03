#include <stdio.h>

int main() {
    int num = 123456;
    int last_digit;

    if (num < 0) num = -num; // Make sure it's positive

    last_digit = num % 10;

    printf("Last digit: %d\n", last_digit);
    return 0;
}
