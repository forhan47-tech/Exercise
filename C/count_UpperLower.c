#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];
    int uppercase = 0, lowercase = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))  // Check if uppercase letter
            uppercase++;
        else if (islower(str[i]))  // Check if lowercase letter
            lowercase++;
    }

    printf("Uppercase Letters: %d\n", uppercase);
    printf("Lowercase Letters: %d\n", lowercase);
    return 0;
}

