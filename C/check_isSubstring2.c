#include <stdio.h>
#include <string.h>

int containsSubstring(const char *str, const char *sub) {
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
        if (match) return 1;  // Found
    }

    return 0;  // Not found
}

int main() {
    const char *text = "modular audit-safe diagnostics";
    const char *pattern = "audit";

    if (containsSubstring(text, pattern))
        printf("Substring \"%s\" found in \"%s\".\n", pattern, text);
    else
        printf("Substring \"%s\" not found in \"%s\".\n", pattern, text);

    return 0;
}
