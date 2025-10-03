#include <stdio.h>

int main() {
    char str[100], filtered[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            filtered[j++] = str[i]; // Copy only alphabets
        }
    }
    filtered[j] = '\0'; // Null-terminate the filtered string

    printf("Filtered string (alphabets only): %s\n", filtered);
    return 0;
}
