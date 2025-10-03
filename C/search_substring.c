#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world, welcome to C programming!";
    char word[] = "world";

    if (strstr(str, word)) {
        printf("Word found!\n");
    } else {
        printf("Word not found!\n");
    }

    return 0;
}
