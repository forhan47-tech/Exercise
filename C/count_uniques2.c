#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, this is a test string. Hello world!";

    char *words[100];
    int wordCount = 0, uniqueCount = 0;
    
    char *token = strtok(str, " "); 
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < wordCount; i++) {
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) { // Counting unique words
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            uniqueCount++;
        }
    }

    printf("Total unique words: %d\n", uniqueCount);
    return 0;
}
