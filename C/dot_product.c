#include <stdio.h>

int main() {
    double vec1[] = {1.0, 3.0, -5.0};
    double vec2[] = {4.0, -2.0, -1.0};

    size_t size1 = sizeof(vec1) / sizeof(vec1[0]);
    size_t size2 = sizeof(vec2) / sizeof(vec2[0]);

    if (size1 != size2) {
        printf("Error: Vectors must be of same size.\n");
        return 1;
    }

    double result = 0.0;
    for (size_t i = 0; i < size1; ++i) {
        result += vec1[i] * vec2[i];
    }

    printf("Dot Product: %.2f\n", result); 
    return 0;
}
