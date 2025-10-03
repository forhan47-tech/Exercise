#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,banana,grape,orange";
    const char *delimiter = ",";

    char *token = strtok(str, delimiter);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }

    return 0;
}
