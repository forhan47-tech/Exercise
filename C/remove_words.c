#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[20], result[200] = "";
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter word to remove: ");
    scanf("%s", word);

    char *token = strtok(str, " \n,.!?;"); 
    while (token != NULL) {
        if (strcmp(token, word) != 0) { // Skip the word to remove
            strcat(result, token);
            strcat(result, " "); // Add space between words
        }
        token = strtok(NULL, " \n,.!?;");
    }

    printf("Modified sentence: %s\n", result);
    return 0;
}
