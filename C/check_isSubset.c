#include <stdio.h>

int main() {
    int arr1[] = {3, 5};
    int arr2[] = {1, 3, 5, 7};

    int subset = 1;
    for (int i = 0; i < 2; i++) {
        int found = 0;
        for (int j = 0; j < 4; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) subset = 0;
    }

    if (subset) printf("arr1 is a subset of arr2");
    else printf("arr1 is NOT a subset of arr2");

    return 0;
}

