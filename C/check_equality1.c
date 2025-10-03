#include <stdio.h>

int main() {
    int x = 5, y = 5;

    if ((x ^ y) == 0) {
        printf("Numbers are equal.\n");
    } else {
        printf("Numbers are different.\n");
    }

    return 0;
}

