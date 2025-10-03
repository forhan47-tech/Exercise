#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[] = "apple banana apple orange apple banana";  

    char* words[100]; // Array to store words
    int freq[100] = {0};
    int index = 0;

    char* token = strtok(str, " "); // Split the string by spaces
    while (token != NULL) {
        bool found = 0;
        for (int i = 0; i < index; i++) { // Check if word already exists in the words array
            if (strcmp(words[i], token) == 0) {
                freq[i]++;
                found = 1;
                break;
            }
        }

        if (!found) { // New word
            words[index] = token;
            freq[index]++;
            index++;
        }
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < index; i++) {
        printf("%s: %d\n", words[i], freq[i]);
    }

    return 0;
}
