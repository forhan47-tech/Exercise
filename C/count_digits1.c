#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;  // Special case: Zero has 1 digit
    } else {
        while (num != 0) {
            num /= 10;  // Remove last digit
            count++;    // Increment digit counter
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}

