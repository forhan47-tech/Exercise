#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No non-zero digit.\n");
    } else {
        while (num % 10 == 0) { // Strip trailing zeros
            num /= 10; 
        }

        int lastNonZero = num % 10;
        printf("Last non-zero digit: %d\n", lastNonZero);
    }

    return 0;
}
