#include <stdio.h>

int main() {
    char str[] = "Hello, World!";

    int start = 7; // Starting index
    int length = 5; // Number of characters to extract

    char sub[length + 1]; // Extra space for null terminator

    for (int i = 0; i < length; i++) {
        sub[i] = str[start + i]; // Copy manually
    }
    sub[length] = '\0'; // Null terminator

    printf("Extracted substring: %s\n", sub);
    return 0;
}
