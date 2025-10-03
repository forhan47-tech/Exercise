#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "audit-safe-audit-safe";   
    char result[100];
    int freq[256] = {0};
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (freq[ch] == 0) {
            result[j++] = ch;
            freq[ch] = 1;
        }
    }
    result[j] = '\0';

    printf("String after removing duplicate characters:\n%s\n", result);
    return 0;
}
