#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char num[] = "00012345000";
    int len = strlen(num);
    char last = '\0';

    for (int i = len - 1; i >= 0; i--) {
        if (isdigit(num[i]) && num[i] != '0') {
            last = num[i]; // Find last nonzero digit
            break;
        }
    }

    if (last != '\0') {
        printf("Last nonzero digit: %c\n", last);
    } else {
        printf("No nonzero digit found.\n");
    }

    return 0;
}
