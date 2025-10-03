#include <stdio.h>

int main() {
    char hex[] = "1A3";  
    int decimal = 0;

    for (int i = 0; hex[i] != '\0'; i++) {
        char ch = hex[i];
        int digit;

        if (ch >= '0' && ch <= '9')
            digit = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            digit = ch - 'A' + 10;
        else if (ch >= 'a' && ch <= 'f')
            digit = ch - 'a' + 10;
        else {
            printf("Error: Invalid hex digit '%c'\n", ch);
            return 1;
        }
        decimal = decimal * 16 + digit;
    }

    printf("Final Decimal Value: %d\n", decimal);
    return 0;
}
