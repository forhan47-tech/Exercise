#include <stdio.h>
#include <string.h>

int isUniqueWords(char *str) {
    char words[100][50];  // Up to 100 words, each max 49 chars
    int count = 0;
    char *token = strtok(str, " \t\n\r.,;:!?-");

    while (token != NULL) {
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0)
                return 0;  // Duplicate word found
        }
        strcpy(words[count++], token);
        token = strtok(NULL, " \t\n\r.,;:!?-");
    }

    return 1;  // All words are unique
}

int main() {
    char input[500];

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    char buffer[500];
    strcpy(buffer, input); // Make a copy since strtok modifies the original string

    if (isUniqueWords(buffer))
        printf("All words are unique.\n");
    else
        printf("Duplicate words found.\n");

    return 0;
}
