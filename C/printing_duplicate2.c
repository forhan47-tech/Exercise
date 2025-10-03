#include <stdio.h>

void printDuplicateChars(const char *str) {
    int freq[256] = {0};  // ASCII character frequency

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++; // Count frequency of each character
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            printf("Duplicate char: '%c' (count: %d)\n", i, freq[i]); // Print characters with frequency > 1
        }
    }
}

int main() {
    const char *input = "modular audit diagnostics";
    printDuplicateChars(input);
    return 0;
}
