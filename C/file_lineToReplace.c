#include <stdio.h>

int main() {
    FILE *file, *temp;
    char buffer[1024];
    int line_to_replace, current_line = 1;

    file = fopen("input.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter line number to replace: ");
    scanf("%d", &line_to_replace);

    getchar(); 

    printf("Enter new line content: ");
    fgets(buffer, sizeof(buffer), stdin);  // Get replacement line

    char file_line[1024];

    while (fgets(file_line, sizeof(file_line), file) != NULL) {
        if (current_line == line_to_replace) {
            fputs(buffer, temp);  // Replace target line
        } else {
            fputs(file_line, temp);  // Copy unchanged lines
        }
        current_line++;
    }

    fclose(file);
    fclose(temp);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Line %d replaced successfully.\n", line_to_replace);
    return 0;
}
