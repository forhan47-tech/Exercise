#include <stdio.h>

int main() {
    char str[1000], cleaned[1000];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            cleaned[j++] = ch;
        }
        i++;
    }
    cleaned[j] = '\0';  // Null-terminate the result

    printf("\nString without non-alphabets:\n%s\n", cleaned);
    return 0;
}
