#include <stdio.h>

int main() {
    int arr[] = {4, 8, 6, 5, 3};

    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float mean = (float)sum / n;

    printf("Mean = %.2f\n", mean);
    return 0;
}
