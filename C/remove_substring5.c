#include <stdio.h>
#include <string.h>

void removeLastOccurrence(char *str, const char *sub) {
    int lenStr = strlen(str);
    int lenSub = strlen(sub);
    int lastPos = -1;

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int match = 1;
        for (int j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                match = 0; // Find last occurrence manually
                break;
            }
        }
        if (match) {
            lastPos = i;  // Update last match position
        }
    }

    if (lastPos != -1) {
        for (int i = lastPos; i <= lenStr - lenSub; i++) {
            str[i] = str[i + lenSub]; // If found, shift characters left to remove it
        }
    }
}

int main() {
    char str[100] = "audit-safe-audit-safe";
    char sub[] = "safe";

    removeLastOccurrence(str, sub);

    printf("After removing last '%s': %s\n", sub, str);
    return 0;
}
