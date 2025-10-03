#include <stdio.h>
#include <ctype.h>

int main() {
    char num[] = "abc0123";
    char first_digit = '\0';

    for (int i = 0; num[i] != '\0'; i++) {
        if (isdigit(num[i])) {
            first_digit = num[i]; // Find first digit
            break;
        }
    }

    if (first_digit != '\0') {
        printf("First digit: %c\n", first_digit);
    } else {
        printf("No digit found.\n");
    }

    return 0;
}
