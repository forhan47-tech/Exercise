#include <stdio.h>
#include <string.h>

int findFirstWordOccurrence(char *str, const char *target) {
    int index = 0;
    char *token = strtok(str, " \t\n\r.,;:!?-");

    while (token != NULL) {
        if (strcmp(token, target) == 0)
            return index;
        token = strtok(NULL, " \t\n\r.,;:!?-");
        index++;
    }
    return -1; // Word not found
}

int main() {
    char text[] = "Hello, world! Welcome to the world of C.";
    const char *word = "world";

    int position = findFirstWordOccurrence(text, word);

    if (position != -1)
        printf("First occurrence of \"%s\" is at word position %d.\n", word, position);
    else
        printf("Word \"%s\" not found.\n", word);

    return 0;
}
