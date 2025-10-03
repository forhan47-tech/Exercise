#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    char target = 'o', replacement = 'x';


    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) str[i] = replacement;
    }

    printf("Modified String: %s\n", str);
    return 0;
}
