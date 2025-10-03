#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("sample.txt", "r"); 

    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    int totalLines = 0, emptyLines = 0;
    char buffer[1024];  // Buffer to store each line

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        totalLines++;  // Count every new line
        if (strcmp(buffer, "\n") == 0) emptyLines++;  // Check for empty lines
    }

    fclose(file);
    
    printf("Total lines: %d\n", totalLines);
    printf("Empty lines: %d\n", emptyLines);
    return 0;
}
