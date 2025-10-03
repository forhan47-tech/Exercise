#include <stdio.h>
#include <string.h>

int findFirstSubstringOccurrence(const char *str, const char *sub) {
    char *pos = strstr(str, sub);
    return pos ? (int)(pos - str) : -1;
}

int main() {
    const char *text = "modular audit-safe diagnostics and audit-grade safety";
    const char *pattern = "audit";

    int index = findFirstSubstringOccurrence(text, pattern);

    if (index != -1)
        printf("First occurrence of \"%s\" is at index %d.\n", pattern, index);
    else
        printf("Substring \"%s\" not found.\n", pattern);

    return 0;
}
