#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "aaabbccddeee";
    
    char result[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i] != str[i - 1]) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing adjacent duplicates: %s\n", result);
    return 0;
}
