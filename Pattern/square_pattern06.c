#include <stdio.h>

int main() {
    int size = 5, num = 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}

