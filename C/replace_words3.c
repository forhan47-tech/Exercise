#include <stdio.h>
#include <string.h>

void replaceLastWord(char *str, const char *oldWord, const char *newWord) {
    char temp[1000];
    strcpy(temp, str);  // Work on a copy to preserve original

    char tokens[100][100];  // Store up to 100 words
    int count = 0;
    int lastIndex = -1;

    char *token = strtok(temp, " ");
    while (token != NULL) {
        strcpy(tokens[count], token);
        if (strcmp(token, oldWord) == 0) {
            lastIndex = count;  // Track last match
        }
        count++;
        token = strtok(NULL, " ");
    }

    str[0] = '\0';  // Clear original string

    for (int i = 0; i < count; i++) {
        if (i == lastIndex) {
            strcat(str, newWord);
        } else {
            strcat(str, tokens[i]);
        }
        strcat(str, " ");
    }
}

int main() {
    char str[1000] = "C is powerful. Learning C is fun!";
    const char *oldWord = "C";
    const char *newWord = "C++";

    replaceLastWord(str, oldWord, newWord);

    printf("Updated string: %s\n", str);
    return 0;
}
