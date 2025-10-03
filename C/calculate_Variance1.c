#include <stdio.h>
#include <math.h> 

int main() {
    int n;
    float arr[100], mean = 0, variance = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        mean += arr[i]; 
    }
    mean /= n; // Calculate mean

    for (i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2); 
    }
    variance /= n; // Compute variance

    printf("Variance of the array: %.2f\n", variance);
    return 0;
}

