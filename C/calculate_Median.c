#include <stdio.h>

void bubble_sort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

float calculate_median(int arr[], int size) {
    bubble_sort(arr, size);
    if(size % 2 == 1) {
        return arr[size / 2];
    } else {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0f;
    }
}

int main() {
    int arr[] = {7, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    float median = calculate_median(arr, n);
    
    printf("Median = %.2f\n", median);
    return 0;
}
