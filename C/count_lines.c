#include <stdio.h>

int main() {
    const char *text = "Hello, world!\nThis is a test string.\nIt spans multiple lines.";
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            count++;
        }
    }

    if (text[0] != '\0') {
        count += 1; // Add 1 to count the last line if the string doesn't end with '\n'
    }

    printf("Total lines: %d\n", count);
    return 0;
}
