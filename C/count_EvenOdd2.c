#include <stdio.h>

int main() {
    int num = 234567, digit; 
    int evenCount = 0, oddCount = 0;

    while (num != 0) {
        digit = num % 10; // Extract last digit
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10; // Remove last digit
    }

    printf("Even digits count: %d\n", evenCount);
    printf("Odd digits count: %d\n", oddCount);
    return 0;
}

