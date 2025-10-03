#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    
    char line[256]; // Buffer to store each line
    int lineNumber = 0;

    if (!file) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        lineNumber++;
        printf("Line %d: %s", lineNumber, line);
    }

    fclose(file);
    return 0;
}
