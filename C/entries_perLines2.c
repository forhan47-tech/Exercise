#include <stdio.h>

void printElementsPerLine(const int arr[], int size, int limit) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % limit == 0) {
            printf("\n");
        }
    }
    if (size % limit != 0) {
        printf("\n");  // Final newline if last line is incomplete
    }
}

int main() {
    int data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int size = sizeof(data) / sizeof(data[0]);
    int perLine = 4;

    printf("Array elements (%d per line):\n", perLine);
    printElementsPerLine(data, size, perLine);
    return 0;
}
