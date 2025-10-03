#include <stdio.h>

int main() {
    float P, R, T, SI;

    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R%%): ");
    scanf("%f", &R);
    
    printf("Enter Time (T in years): ");
    scanf("%f", &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %.2f\n", SI);
    return 0;
}
