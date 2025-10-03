#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (ch >= '0' && ch <= '9')
        printf("'%c' is a DIGIT character.\n", ch);
    else
        printf("'%c' is NOT a digit character.\n", ch);

    return 0;
}
