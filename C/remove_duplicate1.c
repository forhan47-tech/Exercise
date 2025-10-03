#include <stdio.h>

void removeDuplicateChars(char *str) {
    int seen[256] = {0};  // ASCII character map
    int i = 0, j = 0;

    while (str[i] != '\0') {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            seen[ch] = 1;
            str[j++] = ch;
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the result
}

int main() {
    char str[100] = "audit-safe diagnostics";

    removeDuplicateChars(str);

    printf("After removing duplicates: \"%s\"\n", str);
    return 0;
}
