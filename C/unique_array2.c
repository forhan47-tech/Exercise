#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique Values: ");    
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]); 
        }
    }
    printf("\n");
    
    return 0;
}
