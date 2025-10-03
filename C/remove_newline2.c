#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0'; // Remove trailing newline

    printf("\nString after removing trailing newline:\n%s\n", str);
    return 0;
}
