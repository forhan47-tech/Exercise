#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world from C";
    char* token = strtok(str, " "); // Split by spaces

    while (token != NULL) {
        printf("%s\n", token); // Print each word
        token = strtok(NULL, " "); // Get next word
    }

    return 0;
}
