#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    char* words[50]; 
    int count = 0;

    char* token = strtok(str, " "); 
    while (token != NULL) {
        words[count++] = token; // Store words
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[i]); // Print words in reverse order
    }
    printf("\n");
}

int main() {
    char str[] = "Hello world from C";
    reverseWords(str);
    return 0;
}
