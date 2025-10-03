#include <stdio.h>

int main() {
    char str1[100] = "Hello, World!", str2[100] = "Goodbye, World!";

    // Swap character by character
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    return 0;
}

