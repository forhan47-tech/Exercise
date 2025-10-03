#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (strlen(str1) != strlen(str2)) {
        printf("Not permutations: lengths differ.\n");
        return 0;
    }

    int freq[128] = {0}; 

    for (int i = 0; str1[i] != '\0'; i++) { 
        freq[(int)str1[i]]++; // Count characters in str1
    }

    for (int i = 0; str2[i] != '\0'; i++) { 
        freq[(int)str2[i]]--; // Subtract characters in str2
    }

    for (int i = 0; i < 128; i++) { 
        if (freq[i] != 0) {
            printf("Not permutations: character mismatch.\n");
            return 0; // Check if all frequencies are zero
        }
    }

    printf("'%s' and '%s' are permutations of each other.\n", str1, str2);
    return 0;
}
