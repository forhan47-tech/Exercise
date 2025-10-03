#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ispunct(ch)) {
            count++; // Check for ASCII punctuation ranges
        }
    }

    printf("\nTotal punctuation characters: %d\n", count);
    return 0;
}
