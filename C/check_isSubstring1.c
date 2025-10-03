#include <stdio.h>

int main() {
    char str[1000], sub[1000];
    int found = 0;

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);

    printf("Enter the substring to search: ");
    fgets(subStr, sizeof(subStr), stdin);

    for (int i = 0; str[i] != '\0'; i++) { // Manual substring search
        for (int j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j])
                break;
        }    
        if (sub[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("\nSubstring found!\n");
    else
        printf("\nSubstring NOT found.\n");

    return 0;
}
