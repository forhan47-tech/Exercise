#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter a password: ");
    scanf("%s", password);

    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else hasSpecial = 1;  // anything not a letter or digit
    }

    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Valid password\n");
    else
        printf("Invalid password\n");

    return 0;
}
