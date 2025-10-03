#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest;
    
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);

    printf("Enter Time period (in years): ");
    scanf("%lf", &time);
    
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    
    printf("Compound Interest: %.2f\n", compound_interest); 
    return 0;
}

