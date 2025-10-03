#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world, welcome to programming!";

    char oldWord[] = "world";
    char newWord[] = "Earth";
    char result[1000] = ""; 

    char *token = strtok(str, " "); 
    while (token != NULL) {
        if (strcmp(token, oldWord) == 0) {
            strcat(result, newWord);
        } else {
            strcat(result, token);
        }
        strcat(result, " "); // Restore spaces
        token = strtok(NULL, " ");
    }

    printf("Updated string: %s\n", result);
    return 0;
}
