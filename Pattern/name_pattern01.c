#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "NAIMUDDIN";  

    for (int i = 0; i < strlen(name); i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", name[j]);  // Print letters sequentially
        }
        printf("\n");
    }

    return 0;
}
