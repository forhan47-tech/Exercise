#include <stdio.h>
#include <ctype.h>

void removePunctuation(char *str) {
    int i = 0, j = 0;
    
    while (str[i]) {
        if (!ispunct(str[i])) { // Check if character is not punctuation
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the cleaned string
}

int main() {
    char str[] = "Hello, world! Welcome to C.";
    removePunctuation(str);
    printf("Cleaned string: %s\n", str);
    return 0;
}
