#include <stdio.h>

int lucas(int n) {
    if (n == 0) return 2;  // Base case: L(0) = 2
    if (n == 1) return 1;  // Base case: L(1) = 1
    return lucas(n - 1) + lucas(n - 2); 
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Lucas Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lucas(i)); 
    }  
    printf("\n");
    return 0;
}

