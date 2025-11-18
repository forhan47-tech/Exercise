#include <stdio.h>

int main() {
    int size = 5;
    char ch = 'A';
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}

