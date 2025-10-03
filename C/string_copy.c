#include <stdio.h>

int main() {
    char original[] = "Hello, World!"; 
    char copied[50];  // Destination array (ensure it's large enough)
    int i = 0;

    while (original[i] != '\0') { 
        copied[i] = original[i]; // Copy each character until the null terminator (`\0`)
        i++;
    }
    copied[i] = '\0';  

    printf("Copied String: %s\n", copied);
    return 0;
}

