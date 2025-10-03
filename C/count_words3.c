#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int count = 0;

    printf("Enter a sentence:\n");
    fgets(text, sizeof(text), stdin);

    char *token = strtok(text, " \t"); // Use strtok to split the string by spaces
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t");
    }

    printf("\nTotal number of words = %d\n", count);
    return 0;
}
