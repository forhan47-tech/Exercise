#include <stdio.h>
#include <string.h>

void printSubseq(char *str, char *subseq, int i, int j) {
    if (str[i] == '\0') {
        subseq[j] = '\0';
        if (j > 0)  // Skip empty subsequence if desired
            printf("%s\n", subseq);
        return;
    }

    subseq[j] = str[i];
    printSubseq(str, subseq, i + 1, j + 1); // Include current character
    printSubseq(str, subseq, i + 1, j); // Exclude current character
}

int main() {
    char str[1000], subseq[1000];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nAll subsequences:\n");
    printSubseq(str, subseq, 0, 0);

    return 0;
}
