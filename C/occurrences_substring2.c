#include <stdio.h>
#include <string.h>

int findFirstSubstringOccurrence(const char *str, const char *sub) {
    int lenStr = strlen(str);
    int lenSub = strlen(sub);

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int match = 1;
        for (int j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }
        if (match) return i; // Return starting index of first match
    }
    return -1; // Not found
}

int main() {
    const char *text = "modular audit-safe diagnostics and audit-grade safety";
    const char *pattern = "audit";

    int index = findFirstSubstringOccurrence(text, pattern);

    if (index != -1)
        printf("Substring \"%s\" first occurs at index %d.\n", pattern, index);
    else
        printf("Substring \"%s\" not found.\n", pattern);

    return 0;
}
