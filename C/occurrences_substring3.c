#include <stdio.h>
#include <string.h>

int findLastSubstringOccurrence(const char *str, const char *sub) {
    int lenStr = strlen(str);
    int lenSub = strlen(sub);
    int lastIndex = -1;

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int match = 1;
        for (int j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }
        if (match) lastIndex = i; // Update on every match
    }

    return lastIndex; // -1 if not found
}

int main() {
    const char *text = "audit-safe diagnostics and audit-safe logs";
    const char *pattern = "audit-safe";

    int index = findLastSubstringOccurrence(text, pattern);

    if (index != -1)
        printf("Last occurrence of \"%s\" is at index %d.\n", pattern, index);
    else
        printf("Substring \"%s\" not found.\n", pattern);

    return 0;
}
