#include <stdio.h>
#include <stdbool.h>  

bool is_prime(int num) {
    if (num <= 1) 
       return false;  // Prime numbers must be greater than 1
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) 
           return false;  // Found a divisor, not prime
    }
    return true;
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

