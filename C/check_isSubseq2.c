#include <stdio.h>
#include <string.h>

int isSubsequence(char *sub, char *main) {
    int i = 0, j = 0;
    int lenSub = strlen(sub);
    int lenMain = strlen(main);

    while (i < lenSub && j < lenMain) {
        if (sub[i] == main[j]) {
            i++; // Match found, move to next char in subsequence
        }
        j++; // Always move in main string
    }

    return (i == lenSub); // All characters matched?
}

int main() {
    char s1[100], s2[100];

    printf("Enter subsequence string: ");
    scanf("%s", s1);

    printf("Enter main string: ");
    scanf("%s", s2);

    if (isSubsequence(s1, s2))
        printf("\"%s\" is a subsequence of \"%s\"\n", s1, s2);
    else
        printf("\"%s\" is NOT a subsequence of \"%s\"\n", s1, s2);

    return 0;
}
