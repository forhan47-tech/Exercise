#include <stdio.h>
#include <string.h>

int countSubstringOccurrences(const char *str, const char *sub) {
    int count = 0;
    int lenStr = strlen(str);
    int lenSub = strlen(sub);

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int match = 1;
        for (int j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    return count;
}

int main() {
    const char *text = "abcabcabc";
    const char *pattern = "abc";

    int result = countSubstringOccurrences(text, pattern);
    
    printf("Substring \"%s\" occurs %d time(s) in \"%s\".\n", pattern, result, text);
    return 0;
}
