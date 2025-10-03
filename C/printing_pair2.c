#include <stdio.h>

void printCharPairs(const char *str) {
    for (int i = 0; str[i + 1] != '\0'; i++) {
        printf("('%c', '%c')\n", str[i], str[i + 1]);
    }
}

int main() {
    const char *input = "audit-safe";
    printf("Character pairs in \"%s\":\n", input);
    printCharPairs(input);
    return 0;
}
