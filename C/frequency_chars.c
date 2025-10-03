#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello, World!";  
    int freq[256] = {0}; // ASCII range

    for (int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++; // Count frequency 
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}


