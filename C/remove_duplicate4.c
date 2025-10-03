#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "audit safe audit log audit safe";  
    char words[100][50];
    int count[100] = {0};
    int wordIndex = 0;

    char *token = strtok(str, " ");
    while (token != NULL) {
        int found = 0;
        for (int i = 0; i < wordIndex; i++) {
            if (strcmp(words[i], token) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[wordIndex++], token);
        }
        token = strtok(NULL, " ");
    }

    printf("String after removing duplicate words:\n");
    for (int i = 0; i < wordIndex; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
