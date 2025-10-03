#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, World!", str2[100] = "Hello, World!";

    int i = 0;
    int isEqual = 1; // Assume strings are equal initially

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0; // Strings are different
            break;
        }
        i++;
    }

    if (isEqual && str1[i] == '\0' && str2[i] == '\0') { // Check if both strings end at the same position
        printf("Strings are equal.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}
