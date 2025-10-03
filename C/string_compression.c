#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "aaabbc";
    int len = strlen(str);
    int count = 1;

    printf("Compressed string: ");
    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c %d", str[i], count);
            count = 1;
        }
    }

    printf("\n");
    return 0;
}
