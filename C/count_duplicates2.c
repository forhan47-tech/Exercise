#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) { // Count character frequency
        unsigned char ch = str[i];
            freq[ch]++;
    }

    int duplicateCount = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1)
            duplicateCount++; // Count duplicates
    }

    printf("\nTotal duplicate characters: %d\n", duplicateCount);
    return 0;
}
