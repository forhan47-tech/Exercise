#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char target = 'o';
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("The character '%c' appears %d times.\n", target, count);
    return 0;
}

