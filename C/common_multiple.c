#include <stdio.h>

int main() {
    int a, b, limit;

    printf("Enter two base numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Enter upper limit: ");
    scanf("%d", &limit);

    printf("Common multiples of %d and %d up to %d:\n", a, b, limit);
    for (int i = 1; i <= limit; i++) {
        if (i % a == 0 && i % b == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
