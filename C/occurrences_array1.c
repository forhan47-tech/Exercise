#include <stdio.h>

int countElement(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int result = countElement(arr, n, target);

    printf("Element %d appears %d times.\n", target, result);
    return 0;
}
