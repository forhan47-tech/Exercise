#include <stdio.h>

int main() {
    int a, b, sum = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Ensure a is less than b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i++) {
        if (i % 17 != 0)
            sum += i;
    }

    printf("Sum (excluding multiples of 17) = %d\n", sum);
    return 0;
}
