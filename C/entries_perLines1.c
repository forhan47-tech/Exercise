#include <stdio.h>

int main() {
    int limit = 5;

    for (int i = 1; i <= 20; i++) {
        printf("%d ", i);
        if (i % limit == 0) { 
            printf("\n"); // newline if line is complete
        }
    }

    return 0;
}
