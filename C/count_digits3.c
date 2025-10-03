#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[200];
    int digits = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))  // Check if character is a digit
            digits++;
    }

    printf("Number of digits: %d\n", digits);
    return 0;
}

