#include <stdio.h>

int main() {
    const char *str = "Hello,World Programming,Is Fun";
    char word[100];
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == ',') {
            if (j > 0) {
                word[j] = '\0';        // End current word
                printf("%s\n", word);  // Print it
                j = 0;                 // Reset buffer index
            }
        } else {
            word[j++] = str[i];       // Build word one char at a time
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0';
        printf("%s\n", word);         // Print last word
    }

    return 0;
}
