#include <stdio.h>

void geometricTriad() {
    int a = 2, r = 3; // First term and common ratio
    int b = a * r;
    int c = b * r;
    printf("Geometric Sequence Triad: %d, %d, %d\n", a, b, c);
}

int main() {
    geometricTriad();
    return 0;
}

