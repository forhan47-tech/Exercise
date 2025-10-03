#include <stdio.h>
#include <stdbool.h>

int main() {
    char str1[] = "NAIMUDDIN";
    char str2[] = "AUDIT";
    bool printed[128] = {false};  // ASCII tracker

    printf("Common characters: ");
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j] && !printed[(int)str1[i]]) {
                printf("%c ", str1[i]);
                printed[(int)str1[i]] = true;
                break;
            }
        }
    }
    
    printf("\n");
    return 0;
}
