#include <stdio.h>
#include <math.h> 

int main() {
    int n;
    float arr[100], mean = 0, stdDev = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        mean += arr[i]; 
    }
    mean /= n; // Calculate mean

    for (int i = 0; i < n; i++) {
        stdDev += pow(arr[i] - mean, 2); 
    }
    stdDev = sqrt(stdDev / n); // Square root of variance

    printf("Standard Deviation: %.2f\n", stdDev); 
    return 0;
}

