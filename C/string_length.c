#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int length = 0;
    while (str[length] != '\0') { 
        length++; // Count characters until null terminator
    }

    if (length > 0 && str[length - 1] == '\n') {
        length--; // Adjust for newline added by fgets()
    }

    printf("String length: %d\n", length);
    return 0;
}
