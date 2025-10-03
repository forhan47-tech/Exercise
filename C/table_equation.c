#include <stdio.h>

int main() {
    printf(" x  | x+2 | x+4\n");
    printf("----|-----|-----\n");

    for (int x = 1; x <= 10; x++) {
        printf("%3d | %3d | %3d\n", x, x + 2, x + 4);
    }

    return 0;
}
