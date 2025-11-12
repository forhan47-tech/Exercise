#include <stdio.h>

int main() {
    int size = 5;
    
    char ch = 'A'; // You can change this to any character
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}

