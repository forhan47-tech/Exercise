#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;

    printf("Enter 5 integers:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("\nPositive Count = %d\n", count);
        printf("Average of Positive Numbers = %.2f\n", average);
    } else {
        printf("\nNo positive numbers entered.\n");
    }

    return 0;
}
