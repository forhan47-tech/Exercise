#include <stdio.h>
#include <math.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d: ", num);
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d ", i);  
            if (i != num / i)  // Avoid duplicate factors
                printf("%d ", num / i);
        }
    }

    printf("\n");
    return 0;
}

