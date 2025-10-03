#include <stdio.h>
#include <string.h>

int isSubsequence(char *str, char *sub) {
    int i = 0, j = 0;

    while (str[i] != '\0' && sub[j] != '\0') {
        if (str[i] == sub[j]) {
            j++;  // Match found, move to next character in sub
        }
        i++;      // Always move in str
    }

    return (sub[j] == '\0');  // If all of sub was matched
}

int main() {
    char str[] = "abcde";
    char sub[] = "ace";

    if (isSubsequence(str, sub)) {
        printf("'%s' is a subsequence of '%s'\n", sub, str);
    } else {
        printf("'%s' is NOT a subsequence of '%s'\n", sub, str);
    }

    return 0;
}
