#include <stdio.h>

int main() {
    int nums[4];

    printf("Enter 4 integers:\n");
    for (int i = 0; i < 4; i++)
        scanf("%d", &num[i]);

    int max = num[0], min = num[0];

    for (int i = 1; i < 4; i++) {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }
    int diff = max - min;
    
    printf("Max = %d, Min = %d\n", max, min);
    printf("Difference = %d\n", diff);
    return 0;
}
