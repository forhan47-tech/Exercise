#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int pos1, pos2;

    printf("Enter a number: ");
    scanf("%s", str);

    printf("Enter first position to swap (0-based index): ");
    scanf("%d", &pos1);

    printf("Enter second position to swap (0-based index): ");
    scanf("%d", &pos2);

    // Inline swap logic
    char temp = str[pos1];
    str[pos1] = str[pos2];
    str[pos2] = temp;

    printf("Modified number: %s\n", str);
    return 0;
}
