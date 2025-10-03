#include <stdio.h>
#include <ctype.h>

int main() {
    char num[] = "00012345";
    char first = '\0';

    for (int i = 0; num[i] != '\0'; i++) {
        if (isdigit(num[i]) && num[i] != '0') {
            first = num[i]; // Find first nonzero digit
            break;
        }
    }

    if (first != '\0') {
        printf("First nonzero digit: %c\n", first);
    } else {
        printf("No nonzero digit found.\n");
    }

    return 0;
}
