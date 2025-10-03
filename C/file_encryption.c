#include <stdio.h>

int main() {
    FILE *source, *encrypted;
    char ch;
    int key = 7;  // Encryption key

    source = fopen("input.txt", "r");
    encrypted = fopen("encrypted.txt", "w");

    if (source == NULL || encrypted == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch ^ key, encrypted);  // XOR encrypt each character
    }

    fclose(source);
    fclose(encrypted);

    printf("File encrypted successfully.\n");
    return 0;
}
