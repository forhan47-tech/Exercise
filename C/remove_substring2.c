#include <stdio.h>
#include <string.h>

void removeSubstring(char *str, const char *sub) {
    int lenStr = strlen(str);
    int lenSub = strlen(sub);
    int i, j;

    for (i = 0; i <= lenStr - lenSub; i++) {
        int match = 1;
        for (j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            for (j = i; j <= lenStr - lenSub; j++) {
                str[j] = str[j + lenSub]; // Shift the rest of the string left
            }
            break; // Remove only first occurrence
        }
    }
}

int main() {
    char str[100] = "audit-safe diagnostics and audit-safe logs";
    const char *sub = "audit-safe";

    removeSubstring(str, sub);

    printf("After removal: \"%s\"\n", str);
    return 0;
}
