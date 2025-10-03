#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int alphabets = 0, digits = 0, specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++; // Count alphabet characters
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++; // Count digits
        } else if (str[i] != ' ' && str[i] != '\n') {
            specials++; // Count special characters (excluding spaces)
        }
    }

    printf("Alphabets: %d\nDigits: %d\nSpecial characters: %d\n", alphabets, digits, specials);
    return 0;
}
