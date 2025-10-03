#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) { // Convert vowels to uppercase
        char ch = str[i];
        
        if (ch == 'a') str[i] = 'A';
        else if (ch == 'e') str[i] = 'E';
        else if (ch == 'i') str[i] = 'I';
        else if (ch == 'o') str[i] = 'O';
        else if (ch == 'u') str[i] = 'U';
    }

    printf("\nModified string:\n%s\n", str);
    return 0;
}
