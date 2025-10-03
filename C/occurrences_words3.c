#include <stdio.h>
#include <string.h>

int findLastWordOccurrence(char *str, const char *target) {
    int index = 0;
    int lastIndex = -1;
    char *token = strtok(str, " \t\n\r.,;:!?-");

    while (token != NULL) {
        if (strcmp(token, target) == 0)
            lastIndex = index; // Keep updating on match
        token = strtok(NULL, " \t\n\r.,;:!?-");
        index++;
    }

    return lastIndex; // -1 if not found
}

int main() {
    char text[] = "Hello, world! Welcome to the world of C.";
    const char *word = "world";

    int position = findLastWordOccurrence(text, word);

    if (position != -1)
        printf("Last occurrence of \"%s\" is at word position %d.\n", word, position);
    else
        printf("Word \"%s\" not found.\n", word);

    return 0;
}
