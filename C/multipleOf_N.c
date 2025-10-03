#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (a % b == 0) {
        printf("%d is a multiple of %d\n", a, b);
    } else {
        printf("%d is not a multiple of %d\n", a, b);
    }

    return 0;
}
