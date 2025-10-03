#include <stdio.h>

int main() {
    char str[100], replacement;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter replacement character: ");
    scanf("%c", &replacement);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = replacement; // Replace space
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}
