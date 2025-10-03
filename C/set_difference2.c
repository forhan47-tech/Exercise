#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 5, 8};

    printf("Difference (A - B): ");
    for (int i = 0; i < 4; i++) {
        bool found = 0;
        for (int j = 0; j < 4; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        
        if (!found) printf("%d ", arr1[i]);
    }

    return 0;
}

