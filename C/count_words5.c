#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,\tworld! Welcome\nto programming.";

    const char *delims = " \t\n,.;:!?\"()[]{}";
    int count = 0;
    
    char *token = strtok(str, delims);
    while (token != NULL) {
        count++;
        token = strtok(NULL, delims);
    }

    printf("Total words: %d\n", count);
    return 0;
}
