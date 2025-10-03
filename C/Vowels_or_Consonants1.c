#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch | 32;  // convert uppercase to lowercase
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { // Check if the character is a vowel
        printf("%c is a vowel.\n", ch); 
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}

