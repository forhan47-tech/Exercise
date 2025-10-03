#include <stdio.h>

int main() {
    int n;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Harmonic Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%.2f ", 1.0 / i);
    }  
    printf("\n"); 
    return 0;
}


