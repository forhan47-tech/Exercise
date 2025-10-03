#include <stdio.h>

int main() {
    FILE *file;

    char lines[100][1024]; 
    int count = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(lines[count], sizeof(lines[count]), file) != NULL) {
        count++;  // Store each line in the array
    }

    fclose(file);

    printf("File content stored in array:\n");
    for (int i = 0; i < count; i++) {
        printf("%s", lines[i]);  // Display stored lines
    }

    return 0;
}
