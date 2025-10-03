#include <stdio.h>
#include <string.h>

void removeSubstring(char *str, const char *sub) {
    int subLen = strlen(sub);
    char *pos;

    while ((pos = strstr(str, sub)) != NULL) {
        for (int i = 0; pos[i + subLen] != '\0'; i++) {
            pos[i] = pos[i + subLen];
        }
        pos[i] = '\0';  
    }
}

int main() {
    char str[] = "abcxyzabcxyzabc";
    char sub[] = "abc";

    removeSubstring(str, sub);

    printf("Updated String: %s\n", str);
    return 0;
}
