#include <stdio.h>
#include <string.h>

void removeSubstring(char *str, const char *sub) {
    int lenStr = strlen(str);
    int lenSub = strlen(sub);
    int i = 0, j = 0;

    while (i < lenStr) {
        int match = 1;
        for (int k = 0; k < lenSub && i + k < lenStr; k++) {
            if (str[i + k] != sub[k]) {
                match = 0;
                break;
            }
        }

        if (match) {
            i += lenSub;  // Skip the matched substring
        } else {
            str[j++] = str[i++];  // Copy non-matching character
        }
    }
    str[j] = '\0';  
}

int main() {
    char str[200] = "audit-safe diagnostics and audit-safe logs with audit-safe tools";
    const char *sub = "audit-safe";

    removeSubstring(str, sub);

    printf("After removal: \"%s\"\n", str);
    return 0;
}
