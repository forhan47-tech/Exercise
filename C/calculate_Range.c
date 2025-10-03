#include <stdio.h>

int find_range(int arr[], int size) {
    int max = arr[0], min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    return max - min;
}

int main() {
    int arr[] = {3, 7, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int range = find_range(arr, n);
    
    printf("Range = %d\n", range);
    return 0;
}
