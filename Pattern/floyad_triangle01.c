#include <stdio.h>

int main() {
    int rows = 4, num = 1;

    printf("Floyd's Triangle:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    } 
    return 0;
}

