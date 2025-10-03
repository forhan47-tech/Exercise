#include <stdio.h>

int main() {
    int digit;
    char *spelling[] = { "Zero", "One", "Two", "Three", "Four", 
                         "Five", "Six", "Seven", "Eight", "Nine" };

    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    if (digit >= 0 && digit <= 9) {
        printf("Spelling: %s\n", spelling[digit]);
    } else {
        printf("Invalid input! Please enter a digit between 0 and 9.\n");
    }

    return 0;
}

