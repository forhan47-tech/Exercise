#include <stdio.h>

int main() {
    int num, toggled;

    printf("Enter a number: ");
    scanf("%d", &num);

    toggled = ~num; // Toggle all bits using bitwise NOT (~)

    printf("Toggled Bits Result: %d\n", toggled);
    return 0;
}

