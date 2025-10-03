#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Count words in this sentence.";
    int count = 1;  // At least one word exists

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') 
            count++;
    }

    printf("Total words: %d\n", count);
    return 0;
}
