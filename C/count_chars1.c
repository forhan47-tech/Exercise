#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++; // Count characters until '\0' or newline
    }

    printf("\nTotal characters: %d\n", count);
    return 0;
}
