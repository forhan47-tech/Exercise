#include <stdio.h>
#include <string.h>

void toRoman(int num, char *roman) {
    const char *hundreds[] = {"", "C"};
    const char *tens[]     = {"", "X", "XX", "XXX", "XL", "L",
                              "LX", "LXX", "LXXX", "XC"};
    const char *ones[]     = {"", "I", "II", "III", "IV", "V",
                              "VI", "VII", "VIII", "IX"};

    strcpy(roman, "");
    strcat(roman, hundreds[num / 100]);
    strcat(roman, tens[(num % 100) / 10]);
    strcat(roman, ones[num % 10]);
}

int main() {
    int num;
    char roman[20];

    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);

    if (num < 1 || num > 100) {
        printf("Invalid input! Please enter a number from 1 to 100.\n");
    } else {
        toRoman(num, roman);
        printf("Roman numeral: %s\n", roman);
    }

    return 0;
}
