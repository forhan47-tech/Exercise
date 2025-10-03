
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("data.txt", "r"); 

    char ch, isWord[256];
    int words = 0, characters = 0; // Declare words and characters

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++; // Count every character
    }

    rewind(file); // Reset file pointer to the beginning

    while (fscanf(file, "%s", isWord) == 1) { 
        words++; // Corrected word count variable
    }

    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    return 0;
}
