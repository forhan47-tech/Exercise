#include <stdio.h>

int main() {
    int n, number, sum = 0;

    printf("How many numbers do you want to sum? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number; // Add each inputted number
    }

    printf("The sum of the entered numbers is: %d\n", sum);
    return 0;
}