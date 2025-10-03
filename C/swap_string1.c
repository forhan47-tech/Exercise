#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, World!", str2[100] = "Goodbye, World!";
    char temp[100];

    
    // Swap the strings using a temporary array
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    return 0;
}

