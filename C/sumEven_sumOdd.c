#include <stdio.h>

int main() {
    int n, sumEven = 0, sumOdd = 0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { 
        if (i % 2 == 0) {
            sumEven += i;  // ✅ Sum even numbers
        } else {
            sumOdd += i;   // ✅ Sum odd numbers
        }
    }

    printf("Sum of even numbers up to %d: %d\n", n, sumEven);
    printf("Sum of odd numbers up to %d: %d\n", n, sumOdd);
    return 0;
}

