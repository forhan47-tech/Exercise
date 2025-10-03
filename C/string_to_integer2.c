#include <stdio.h>

int main() {
    char hex[] = "1A3F";
    int result = 0;

    for (int i = 0; hex[i] != '\0'; i++) {
        int digit;

        if (hex[i] >= '0' && hex[i] <= '9') { // Convert character to digit
            digit = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digit = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digit = hex[i] - 'a' + 10;
        } else {
            printf("Invalid character '%c' — aborting.\n", hex[i]);
            return 1;
        }
        result = (result << 4) + digit; // Build result using bitwise shift: result = result * 16 + digit
    }

    printf("\nFinal integer: %d\n", result);
    return 0;
}
