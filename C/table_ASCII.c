#include <stdio.h>

int main() {
    printf("ASCII Code to Character Mapping (32-255):\n");
    printf("----------------------------------------\n");

    for (int i = 32; i <= 255; i++) {
        printf("%3d = %c\t", i, i);

        if ((i - 31) % 4 == 0)
            printf("\n"); // Print 4 entries per line
    }

    return 0;
}
