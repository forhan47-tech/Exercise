#include <stdio.h>
#include <string.h>

void removeChar(char str[], char target) {
    int newSize = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != target) {
            str[newSize++] = str[i];
        }
    }
    str[newSize] = '\0'; 
}

int main() {
    char str[] = "geeksforgeeks";
    char target = 'e';

    removeChar(str, target);
    
    printf("Updated String: %s\n", str);
    return 0;
}
