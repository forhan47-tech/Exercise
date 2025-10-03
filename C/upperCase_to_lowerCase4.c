#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nUppercase version:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
            ch = ch & ~32;  // Convert to uppercase
        printf("%c", ch);
    }

    printf("\n\nLowercase version:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch | 32;  // Convert to lowercase
        printf("%c", ch);
    }

    return 0;
}
