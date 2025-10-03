#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C is powerful. Learning C is fun!";
    
    char oldWord[] = "C";
    char newWord[] = "C++";
    char result[200] = ""; 

    char *token = strtok(str, " "); 
    int replaced = 0; // Track first replacement

    while (token != NULL) {
        if (strcmp(token, oldWord) == 0 && !replaced) {
            strcat(result, newWord); 
            replaced = 1; 
        } else {
            strcat(result, token);
        }
        strcat(result, " "); 
        token = strtok(NULL, " ");
    }

    printf("Updated string: %s\n", result);
    return 0;
}
