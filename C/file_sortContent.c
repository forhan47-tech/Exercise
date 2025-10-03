#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *temp;

    char lines[100][1024]; 
    int count = 0, i, j;
    char tempLine[1024];

    file = fopen("input.txt", "r");
    temp = fopen("sorted.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(lines[count], sizeof(lines[count]), file) != NULL) {
        count++; // Read lines into array
    }
    fclose(file);

    for (i = 0; i < count - 1; i++) { // Sort lines alphabetically using bubble sort
        for (j = i + 1; j < count; j++) {
            if (strcmp(lines[i], lines[j]) > 0) {
                strcpy(tempLine, lines[i]);
                strcpy(lines[i], lines[j]);
                strcpy(lines[j], tempLine);
            }
        }
    }

    for (i = 0; i < count; i++) {
        fputs(lines[i], temp); // Write sorted lines to file
    }

    fclose(temp);

    printf("Lines sorted successfully in sorted.txt.\n");
    return 0;
}
