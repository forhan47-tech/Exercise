#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input. Weight and height must be positive.\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    
    printf("Category: ");
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal weight\n");
    else if (bmi < 30)
        printf("Overweight\n");
    else
        printf("Obesity\n");

    return 0;
}
