#include <stdio.h>

int main() {
    int num;

    int r1_min = 0,   r1_max = 25;
    int r2_min = 26,  r2_max = 50; // Define the ranges (you can adjust these)
    int r3_min = 51,  r3_max = 75;
    int r4_min = 76,  r4_max = 100; 

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= r1_min && num <= r1_max)
        printf("Number is in Range 1: [%d - %d]\n", r1_min, r1_max);
    else if (num >= r2_min && num <= r2_max)
        printf("Number is in Range 2: [%d - %d]\n", r2_min, r2_max);
    else if (num >= r3_min && num <= r3_max)
        printf("Number is in Range 3: [%d - %d]\n", r3_min, r3_max);
    else if (num >= r4_min && num <= r4_max)
        printf("Number is in Range 4: [%d - %d]\n", r4_min, r4_max);
    else
        printf("Number is outside the defined ranges.\n");

    return 0;
}
