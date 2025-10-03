#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    int count = 0, inWord = 0;

    printf("Enter a sentence:\n");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }

    printf("\nTotal number of words = %d\n", count);
    return 0;
}
