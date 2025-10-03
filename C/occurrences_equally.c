#include <stdio.h>

int main() {
    char str[1000];
    int countX = 0, countO = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'x' || str[i] == 'X') countX++;
        if (str[i] == 'o' || str[i] == 'O') countO++;
    }

    if (countX == countO)
        printf("\nEqual number of 'x' and 'o' characters found.\n");
    else
        printf("\nUnequal number: 'x' = %d, 'o' = %d\n", countX, countO);

    return 0;
}
