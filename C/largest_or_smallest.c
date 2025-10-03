#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    char smallest[50], largest[50];

    char *word = strtok(str, " ");
    strcpy(smallest, word);
    strcpy(largest, word);

    while (word != NULL) {
        if (strlen(word) < strlen(smallest)) {
            strcpy(smallest, word);
        }
        if (strlen(word) > strlen(largest)) {
            strcpy(largest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
    return 0;
}
