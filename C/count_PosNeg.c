#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0;

    printf("Enter 10 integers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
    }

    printf("\nTotal Positive Numbers = %d\n", positive);
    printf("Total Negative Numbers = %d\n", negative);
    return 0;
}
