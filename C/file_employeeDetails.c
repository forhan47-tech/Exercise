#include <stdio.h>

int main() {
    FILE *file;
    char name[50], department[50];
    int id, salary;

    file = fopen("employees.txt", "a");  

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    getchar();  // Consume newline

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    printf("Enter Salary: ");
    scanf("%d", &salary);

    fprintf(file, "%d, %s, %s, %d\n", id, name, department, salary);  // Store details in file

    fclose(file);
    printf("Employee details saved successfully!\n");
    return 0;
}
