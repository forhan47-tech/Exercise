#include <stdio.h>

int main() {
    int values[100], count = 0, num;

    printf("Enter non-negative integers (negative number to stop):\n");

    while (scanf("%d", &num) == 1 && num >= 0) {
        values[count++] = num;
    }

    printf("\nHistogram:\n");
    for (int i = 0; i < count; i++) {
        printf("%3d | ", values[i]);
        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
