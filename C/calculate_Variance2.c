#include <stdio.h>

float calculate_mean(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    return (float)sum / size;
}

float calculate_variance(int arr[], int size) {
    float mean = calculate_mean(arr, size);
    float var = 0;
    for(int i = 0; i < size; i++) {
        var += (arr[i] - mean) * (arr[i] - mean);
    }
    return var / size;  
}

int main() {
    int arr[] = {4, 7, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    float variance = calculate_variance(arr, n);

    printf("Variance = %.2f\n", variance);
    return 0;
}
