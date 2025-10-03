#include <stdio.h>

int find_mode(int arr[], int size) {
    int freq[100] = {0}; 

    for(int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    int mode = arr[0], maxFreq = freq[arr[0]];
    for(int i = 1; i < size; i++) {
        if(freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int arr[] = {2, 3, 4, 4, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mode = find_mode(arr, n);

    printf("Mode = %d\n", mode);
    return 0;
}
