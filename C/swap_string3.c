#include <stdio.h>

int main() {
    char *str1 = "Hello";
    char *str2 = "World";
    char *temp;

    temp = str1;
    str1 = str2;
    str2 = temp;

    printf("After Swap: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
