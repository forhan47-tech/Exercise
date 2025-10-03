#include <stdio.h>

int countSpecificDigit(const char *str, char digit) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == digit) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "3129453367753";
    char digit = '3';

    int count = countSpecificDigit(str, digit);
    
    printf("Digit '%c' occurred %d times in \"%s\".\n", digit, count, str);
    return 0;
}
