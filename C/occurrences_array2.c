#include <stdio.h>

int findFirstOccurrence(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return index of first match
        }
    }
    return -1;  // Not found
}

int main() {
    int data[] = {5, 3, 7, 3, 9, 3};
    int target = 3;
    int size = sizeof(data) / sizeof(data[0]);

    int index = findFirstOccurrence(data, size, target);

    if (index != -1) {
        printf("First occurrence of %d is at index %d\n", target, index);
    } else {
        printf("%d not found in the array\n", target);
    }

    return 0;
}
