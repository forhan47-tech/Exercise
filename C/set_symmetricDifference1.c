#include <stdio.h>

void differenceSet(const int A[], int sizeA, const int B[], int sizeB) {
    for (int i = 0; i < sizeA; i++) {
        int found = 0;
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", A[i]);
        }
    }
}

void symmetricDifference(const int A[], int sizeA, const int B[], int sizeB) {
    printf("Symmetric Difference: ");
    differenceSet(A, sizeA, B, sizeB);
    differenceSet(B, sizeB, A, sizeA);
    printf("\n");
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {3, 5, 8, 9};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    symmetricDifference(A, sizeA, B, sizeB);

    return 0;
}
