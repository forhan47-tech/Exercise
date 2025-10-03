#include <stdio.h>

int main() {
    FILE *file, *temp;
    char buffer[1024];
    int line_to_delete, current_line = 1;

    file = fopen("input.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter line number to delete: ");
    scanf("%d", &line_to_delete);

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        if (current_line != line_to_delete) {
            fputs(buffer, temp);  // Copy all lines except the target one
        }
        current_line++;
    }

    fclose(file);
    fclose(temp);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Line %d deleted successfully.\n", line_to_delete);
    return 0;
}
