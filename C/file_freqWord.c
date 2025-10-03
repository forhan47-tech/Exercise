#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char word[50], words[50][50];
    int count[50] = {0}, index = 0;

    file = fopen("input.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%s", word) != EOF) { // Read words
        int found = 0;
        for (int i = 0; i < index; i++) {
            if (strcmp(words[i], word) == 0) { // Word exists
                count[i]++;
                found = 1;
                break;
            }
        }
        if (!found) { // New word
            strcpy(words[index], word);
            count[index]++;
            index++;
        }
    }

    fclose(file);

    printf("Word Frequency:\n");
    for (int i = 0; i < index; i++) {
        printf("%s: %d\n", words[i], count[i]);
    }

    return 0;
}
