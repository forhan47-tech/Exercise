#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert uppercase to lowercase
        printf("Lowercase: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Convert lowercase to uppercase
        printf("Uppercase: %c\n", ch);
    } else {
        printf("Character is not a letter.\n");
    }

    return 0;
}
