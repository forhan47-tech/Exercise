#include <stdio.h>
#include <string.h>

int countSubstringOccurrences(const char *str, const char *sub) {
    int count = 0;
    const char *ptr = str;

    while ((ptr = strstr(ptr, sub)) != NULL) {
        count++;
        ptr += strlen(sub);  // Move past current match
    }

    return count;
}

int main() {
    const char *text = "audit-safe audit-grade audit-safe diagnostics";
    const char *pattern = "audit-safe";

    int result = countSubstringOccurrences(text, pattern);

    printf("Substring \"%s\" occurs %d time(s).\n", pattern, result);
    return 0;
}
