#include <stdio.h>

int main() {
    char str[1000];
    int capitalizeNext = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (capitalizeNext && ch >= 'a' && ch <= 'z') { // Check if it's a lowercase letter and at word start
            str[i] = ch ^ 32;
            capitalizeNext = 0;
        } else if (ch == ' ' || ch == '\t' || ch == '\n') { // If current character is space or punctuation, set flag
            capitalizeNext = 1;
        } else {
            capitalizeNext = 0;
        }
    }

    printf("\nModified string: %s\n", str);
    return 0;
}
