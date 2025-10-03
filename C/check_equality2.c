#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    bool isEqual = 1; // Flag to track equality

    if (n1 != n2) { // Check if sizes are different
        isEqual = 0;
    }
    
    for (int i = 0; i < n1; i++) { // Compare elements one by one
        if (arr1[i] != arr2[i]) {
            isEqual = 0;
            break;
        }
    }

    if (isEqual) {
        printf("Arrays are equal.\n");
    } else {
        printf("Arrays are not equal.\n");
    }

    return 0;
}

