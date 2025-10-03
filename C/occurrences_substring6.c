#include <stdio.h>
#include <string.h>

int findLastSubstringOccurrence(const char *str, const char *sub) {
    int lastIndex = -1;
    const char *ptr = str;

    while ((ptr = strstr(ptr, sub)) != NULL) {
        lastIndex = ptr - str;
        ptr += 1;  // Advance by 1 to allow overlapping matches
    }

    return lastIndex;
}

int main() {
    const char *text = "aaaaa";
    const char *pattern = "aaa";

    int index = findLastSubstringOccurrence(text, pattern);

    if (index != -1)
        printf("Last occurrence of \"%s\" is at index %d.\n", pattern, index);
    else
        printf("Substring \"%s\" not found.\n", pattern);

    return 0;
}
