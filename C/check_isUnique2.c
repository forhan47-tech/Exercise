#include <stdio.h>

int isUniqueArray(const int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) return 0;  // Duplicate found
        }
    }
    return 1;  // All elements are unique
}

int main() {
    int data1[] = {1, 2, 3, 4, 5};
    int data2[] = {10, 20, 30, 10, 40};

    int size1 = sizeof(data1) / sizeof(data1[0]);
    int size2 = sizeof(data2) / sizeof(data2[0]);

    if (isUniqueArray(data1, size1))
        printf("data1 has all unique elements.\n");
    else
        printf("data1 has duplicate elements.\n");

    if (isUniqueArray(data2, size2))
        printf("data2 has all unique elements.\n");
    else
        printf("data2 has duplicate elements.\n");

    return 0;
}
