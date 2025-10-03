#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // ASCII range

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
            freq[ch]++; // Count frequency of each character
    }

    int maxFreq = 0;
    char maxChar = '\0';
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("\nMaximum Frequency Character: '%c' occurred %d times\n", maxChar, maxFreq);
    return 0;
}
