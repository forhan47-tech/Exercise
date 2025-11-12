#include <stdio.h>

int main() {
    int size = 5;
    
    for (int i = 0; i < size; i++) {
        char ch = 'A';
        for (int j = 0; j < size; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}

