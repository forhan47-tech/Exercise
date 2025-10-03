#include <stdio.h>

int main() {
    int A[] = {1, 0, 1, 1, 0, 1};
    int B[] = {1, 1, 1, 0, 0, 1};
    int n = sizeof(A) / sizeof(A[0]); // Get actual array length

    int M00 = 0, M11 = 0, M01 = 0, M10 = 0;

    for (int i = 0; i < n; i++) { 
        if (A[i] == 0 && B[i] == 0) M00++;
        else if (A[i] == 1 && B[i] == 1) M11++;
        else if (A[i] == 0 && B[i] == 1) M01++;
        else if (A[i] == 1 && B[i] == 0) M10++;
    }
    double SMC = (double)(M00 + M11) / (M00 + M11 + M01 + M10);

    printf("Simple Matching Coefficient: %.2f\n", SMC);
    return 0;
}
