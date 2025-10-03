#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int blanks = 0, tabs = 0, newlines = 0;

    printf("Enter a line of text (\\n for newline, \\t for tab):\n");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ')
            blanks++;
        else if (text[i] == '\t')
            tabs++;
        else if (text[i] == '\n')
            newlines++;
    }

    printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return 0;
}
