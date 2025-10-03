#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[1000], cleaned[1000];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum((unsigned char)str[i])) {
            cleaned[j++] = str[i];
        }
    }
    cleaned[j] = '\0';

    printf("\nString without special characters:\n%s\n", cleaned);
    return 0;
}
