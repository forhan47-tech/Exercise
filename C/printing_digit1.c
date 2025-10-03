#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num, reversed = 0;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10; // Reverse first so digits come out left to right
        temp /= 10;
    }

    printf("Digits separated by spaces: ");
    if (reversed == 0) {
        printf("0");
    } else {
        while (reversed > 0) {
            printf("%d ", reversed % 10);
            reversed /= 10;
        }
    }

    printf("\n");
    return 0;
}
