#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    int total = pow(2, n); // Total number of subsequences

    printf("Subsequences:\n");
    for (int i = 1; i < total; i++) { 
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // Check if j-th character is included
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
