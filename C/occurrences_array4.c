#include <stdio.h>

int findLastOccurrence(int arr[], int size, int target) {
    int lastIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            lastIndex = i;  // Keep updating when match is found
        }
    }
    return lastIndex;  // -1 if not found
}

int main() {
    int data[] = {4, 2, 7, 2, 9, 2, 5};
    int target = 2;
    int size = sizeof(data) / sizeof(data[0]);

    int index = findLastOccurrence(data, size, target);

    if (index != -1) {
        printf("Last occurrence of %d is at index %d\n", target, index);
    } else {
        printf("%d not found in the array\n", target);
    }

    return 0;
}
