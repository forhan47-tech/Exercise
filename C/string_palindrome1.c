#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    start = 0;
    end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;  // Mismatch found, not a palindrome
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);

    return 0;
}

