#include <stdio.h>

int main() {
    char ch = 'A';
    printf("ASCII value of %c is %d\n", ch, ch);

    printf("Uppercase Letters and ASCII Codes:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }

    printf("\nLowercase Letters and ASCII Codes:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }
    return 0;
}

