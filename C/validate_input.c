#include <stdio.h>

int main() {
    int value;

    printf("Enter an integer (0-80): ");
    scanf("%d", &value);

    if (value < 0 && -value > 80) {
        printf("Error: Negative value exceeds 80\n");
    } else if (value < 0 || value > 80) {
        printf("Out of range\n");
    } else {
        printf("Accepted value\n");
    }

    return 0;
}
