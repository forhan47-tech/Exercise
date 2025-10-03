#include <stdio.h>

int isSubset(const int A[], int sizeA, const int B[], int sizeB) {
    for (int i = 0; i < sizeA; i++) {
        int found = 0;
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) return 0; // A[i] not found in B
    }
    return 1; // All elements of A found in B
}

int areEqualSets(const int A[], int sizeA, const int B[], int sizeB) {
    return isSubset(A, sizeA, B, sizeB) && isSubset(B, sizeB, A, sizeA);
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {7, 5, 3, 1};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    if (areEqualSets(A, sizeA, B, sizeB))
        printf("Sets are equal.\n");
    else
        printf("Sets are not equal.\n");

    return 0;
}
