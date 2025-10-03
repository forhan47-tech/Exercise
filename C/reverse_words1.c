#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello world from C!";
    char temp[100];

    strcpy(temp, str);  // Copy string to avoid modifying original

    char *token = strtok(temp, " "); 
    printf("Reversed words: ");
    while (token != NULL) {
        reverseWord(token);  // Reverse each word
        printf("%s ", token);
        token = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}
