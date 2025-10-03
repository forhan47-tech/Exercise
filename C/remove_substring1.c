#include <stdio.h>
#include <string.h>

void removeSubstring(char *str, const char *sub) {
    char *pos = strstr(str, sub);
    if (pos != NULL) {
        int len = strlen(sub);
        for (int i = 0; pos[i + len] != '\0'; i++) {
            pos[i] = pos[i + len];
        }
        pos[i] = '\0'; 
    }
}

int main() {
    char str[100] = "audit-safe-audit-safe";
    char sub[] = "safe";

    removeSubstring(str, sub);

    printf("After removing '%s': %s\n", sub, str);
    return 0;
}
