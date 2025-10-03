#include <stdio.h>

int isHexDigit(char ch) {
    if ((ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'F') ||
        (ch >= 'a' && ch <= 'f'))
        return 1;
    return 0;
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isHexDigit(ch))
        printf("'%c' is a hexadecimal digit.\n", ch);
    else
        printf("'%c' is NOT a hexadecimal digit.\n", ch);

    return 0;
}
