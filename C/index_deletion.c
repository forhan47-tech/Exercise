#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos;

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements left
    }
    n--; // Reduce logical size

    printf("Updated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
