#include <stdio.h>
#include <string.h>

int countWordOccurrences(char *str, const char *target) {
    int count = 0;
    char *token = strtok(str, " ");

    while (token != NULL) {
        if (strcmp(token, target) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    return count;
}

int main() {
    char str[200] = "Hello world from C programming world";
    char target[50] = "world";

    char temp[200];
    strcpy(temp, str); // Make a copy since strtok modifies the string

    int count = countWordOccurrences(temp, target);

    printf("Frequency of \"%s\": %d\n", target, count);
    return 0;
}
