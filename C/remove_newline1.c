#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0'; // Remove trailing newline
            break;
        }
    }

    printf("\nString after removing trailing newline:\n%s\n", str);
    return 0;
}
