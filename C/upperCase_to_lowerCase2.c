#include <stdio.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    ch = ch ^ 32;   // Flip the case of the character
    ch = ch & ~32;  // Convert to uppercase
    ch = ch | 32;  // Convert to lowercase

    printf("Flipped case: %c\n", ch);
    return 0;
}

