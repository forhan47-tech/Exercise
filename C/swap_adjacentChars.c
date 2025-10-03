#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcdef";
    int len = strlen(str);

    for (int i = 0; i < len - 1; i += 2) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }

    printf("Swapped String: %s\n", str);
    return 0;
}
