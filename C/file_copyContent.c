#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    destination = fopen("copy.txt", "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);  // Write each character to new file
    }

    fclose(source);
    fclose(destination);
    
    printf("File copied successfully.\n");
    return 0;
}
