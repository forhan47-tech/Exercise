#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0)
        printf("They are multiples.\n");
    else
        printf("They are not multiples.\n");

    return 0;
}
