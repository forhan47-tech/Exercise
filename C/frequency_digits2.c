#include <stdio.h>

int main() {
    char str[] = "2025591995";
    int freq[10] = {0};  // For digits 0–9

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }

    printf("Digit occurrences:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("%d : %d\n", i, freq[i]);
        }
    }
    
    return 0;
}
