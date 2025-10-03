#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[1024], word[50];

    int lineNumber = 0;
    int found = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    printf("Searching for '%s' in file...\n", word);
    while (fgets(line, sizeof(line), file) != NULL) {
        lineNumber++;
        if (strstr(line, word) != NULL) {  // Check if word is in line
            printf("Found '%s' in line %d: %s", word, lineNumber, line);
            found = 1;
        }
    }
    
    fclose(file);

    if (!found) {
        printf("Word '%s' not found in file.\n", word);
    }

    return 0;
}
