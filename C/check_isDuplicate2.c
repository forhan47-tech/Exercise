#include <stdio.h>

int hasDuplicateChars(const char *str) {
    int seen[256] = {0};  // ASCII character map

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (seen[ch]) return 1;  // Duplicate found
        seen[ch] = 1;
    }

    return 0;  // No duplicates
}

int main() {
    const char *input1 = "audit";
    const char *input2 = "diagnostics";

    if (hasDuplicateChars(input1))
        printf("'%s' has duplicate characters.\n", input1);
    else
        printf("'%s' has all unique characters.\n", input1);

    if (hasDuplicateChars(input2))
        printf("'%s' has duplicate characters.\n", input2);
    else
        printf("'%s' has all unique characters.\n", input2);

    return 0;
}
