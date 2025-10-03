#include <stdio.h>

int main() {
    char ch;
    int blanks = 0, tabs = 0, newlines = 0;

    printf("Enter text (Press Ctrl+D or Ctrl+Z to end input):\n");
    while ((ch = getchar()) != EOF) {
        if (ch == ' ')
            blanks++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            newlines++;
    }

    printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return 0;
}
