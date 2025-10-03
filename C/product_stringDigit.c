#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int product = 1;
    int hasDigit = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= '0' && ch <= '9') {
            product *= (ch - '0');
            hasDigit = 1;
        }
    }

    if (hasDigit)
        printf("\nProduct of digits: %d\n", product);
    else
        printf("\nNo digits found in the string.\n");

    return 0;
}
