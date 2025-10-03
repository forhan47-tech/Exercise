#include <stdio.h>
#include <string.h>

int main() {
    const char *text = "audit-safe diagnostics and manifest logs";
    const char *pattern = "manifest";

    if (strstr(text, pattern) != NULL) { 
        printf("Substring \"%s\" found in \"%s\".\n", pattern, text); // Check if pattern exists in text
    } else {
        printf("Substring \"%s\" not found.\n", pattern);
    }

    return 0;
}
