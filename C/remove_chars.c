#include <stdio.h>

int main() {
    char arr[100], result[100];
    
    char removeChar;
    int j = 0;

    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);

    printf("Enter character to remove: ");
    scanf("%c", &removeChar);

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] != removeChar) {
            result[j++] = arr[i]; // Copy all except the unwanted character
        }
    }
    result[j] = '\0'; // Null-terminate the modified array

    printf("Modified string: %s\n", result);
    return 0;
}
