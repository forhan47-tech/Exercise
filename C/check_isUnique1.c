#include <stdio.h>

int isUniqueChars(const char *str) {
    int seen[256] = {0};  // ASCII character map

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (seen[ch]) return 0;  // Duplicate found
        seen[ch] = 1;
    }

    return 1;  // All characters are unique
}

int main() {
    const char *input1 = "audit";
    const char *input2 = "diagnostics";

    if (isUniqueChars(input1))
        printf("'%s' has all unique characters.\n", input1);
    else
        printf("'%s' has duplicate characters.\n", input1);

    if (isUniqueChars(input2))
        printf("'%s' has all unique characters.\n", input2);
    else
        printf("'%s' has duplicate characters.\n", input2);

    return 0;
}
