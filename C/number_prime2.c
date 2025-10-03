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

    printf("Enter a number to check: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
