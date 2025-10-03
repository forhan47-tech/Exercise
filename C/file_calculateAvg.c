#include <stdio.h>

int main() {
    FILE *file;
    
    float num, sum = 0;
    int count = 0;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &num) == 1) {  // Read numbers
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in file.\n");
    } else {
        printf("Average: %.2f\n", sum / count);
    }

    return 0;
}
