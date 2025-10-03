#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; 

    printf("Characters in the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {  
        printf("%c\n", str[i]);  
    }

    return 0;
}

