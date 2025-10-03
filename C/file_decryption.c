
#include <stdio.h>

int main() {
    FILE *encrypted, *decrypted;
    char ch;
    int key = 7;  // Same key used in encryption

    encrypted = fopen("encrypted.txt", "r");
    decrypted = fopen("decrypted.txt", "w");

    if (encrypted == NULL || decrypted == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(encrypted)) != EOF) {
        fputc(ch ^ key, decrypted);  // XOR decrypt each character
    }

    fclose(encrypted);
    fclose(decrypted);

    printf("File decrypted successfully.\n");
    return 0;
}
