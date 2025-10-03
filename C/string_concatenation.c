#include <stdio.h>

int main() {
    char str1[] = "Hello, ";   
    char str2[] = "World!";   
    char result[50];  // Destination array (ensure enough space)
    
    int i = 0, j = 0;

    while (str1[i] != '\0') { // Copy first string to result
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') { // Append second string to result
        result[i] = str2[j];
        i++;
        j++;
    } 
    result[i] = '\0';  

    printf("Concatenated String: %s\n", result);
    return 0;
}

