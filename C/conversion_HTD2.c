#include <stdio.h>

int main() {
    char hex[] = "1A3";
    int decimal = 0;

    for (int i = 0; hex[i] != '\0'; i++) {
        char ch = hex[i];
        int digit = (ch >= '0' && ch <= '9') ? ch - '0' :
                    (ch >= 'A' && ch <= 'F') ? ch - 'A' + 10 :
                    (ch >= 'a' && ch <= 'f') ? ch - 'a' + 10 : 0;

        decimal = decimal * 16 + digit;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
