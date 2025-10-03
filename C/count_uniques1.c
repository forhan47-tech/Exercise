#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int uniqueCount = 0;

    for (int i = 0; i < 10; i++) {
        int isUnique = 1;
        for (int j = 0; j < 10; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
            uniqueCount++;
    }

    printf("Number of unique elements: %d\n", uniqueCount);
    return 0;
}
