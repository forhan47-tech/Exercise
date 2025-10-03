#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        ch = tolower(ch);  // Convert uppercase to lowercase
        printf("Converted to lowercase: %c\n", ch);
    } else if (islower(ch)) {
        ch = toupper(ch);  // Convert lowercase to uppercase
        printf("Converted to uppercase: %c\n", ch);
    } else {
        printf("Invalid input! Please enter an alphabetic character.\n");
    }

    return 0;
}

