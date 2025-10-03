#include <stdio.h>

int main() {
    float cm, inches;

    printf("Enter distance in centimeters: ");
    scanf("%f", &cm);

    inches = cm / 2.54;
    
    printf("%.2f cm = %.2f inches\n", cm, inches);
    return 0;
}
