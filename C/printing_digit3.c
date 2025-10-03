#include <stdio.h>
#include <string.h>

int main() {
    char number[100];
    
    printf("Enter a number: ");
    scanf("%s", number); 

    for (int i = 0; number[i] != '\0'; i++) {
        printf("%c", number[i]);
        if (number[i + 1] != '\0' && number[i] != '-')  // avoid space after minus sign
            printf(" ");
    }
    printf("\n");

    return 0;
}
