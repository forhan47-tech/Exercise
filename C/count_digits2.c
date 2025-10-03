#include <stdio.h>
#include <math.h>

int main() {
    int num, count;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;  // Zero has 1 digit
    } else {
        count = log10(abs(num)) + 1;  // Logarithm-based count
    }

    printf("Number of digits: %d\n", count);
    return 0;
}

