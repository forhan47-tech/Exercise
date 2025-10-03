#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char num[] = "abc01230xyz";
    
    int len = strlen(num);
    char last_digit = '\0';

    for (int i = len - 1; i >= 0; i--) {
        if (isdigit(num[i])) {
            last_digit = num[i]; // Find last digit
            break;
        }
    }

    if (last_digit != '\0') {
        printf("Last digit: %c\n", last_digit);
    } else {
        printf("No digit found.\n");
    }

    return 0;
}
