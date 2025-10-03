#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; 

    int n = sizeof(arr) / sizeof(arr[0]);
    int pos, value;

    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; // Shift elements right
    }

    arr[pos] = value;
    n++; // Increase logical size

    printf("Updated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
