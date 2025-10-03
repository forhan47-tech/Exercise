#include <stdio.h>

int main() {
    char str[1000];
    int count = 0, inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0;  // Outside a word
        } else if (!inWord) {
            count++;     // Start of a new word
            inWord = 1;
        }
    }

    printf("\nTotal words: %d\n", count);
    return 0;
}
