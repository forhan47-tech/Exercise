#include <stdio.h>

int main() {
    int num = 1234500;
    int first_digit;

    if (num < 0) num = -num; // Make sure it's positive

    while (num >= 10) {
        num /= 10; // Reduce until only the first digit remains
    }

    first_digit = num;
    
    printf("First digit: %d\n", first_digit);
    return 0;
}
