#include <stdio.h>
#include <string.h>

void printWordPairs(char *str) {
    char *words[100];
    int count = 0;

    char *token = strtok(str, " \t\n\r.,;:!?-");
    while (token != NULL && count < 100) {
        words[count++] = token;
        token = strtok(NULL, " \t\n\r.,;:!?-");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("('%s', '%s')\n", words[i], words[i + 1]);
    }
}

int main() {
    char input[] = "Modular audit-safe diagnostics ensure reversible automation.";
    printf("Word pairs:\n");
    printWordPairs(input);    
    return 0;
}
