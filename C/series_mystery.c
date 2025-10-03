#include <stdio.h>

int main() {
    printf("Mystery Series: ");
    for (int i = 1; i <= 15; i++) {
        if (i % 3 != 0) {  // Skip numbers divisible by 3
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
