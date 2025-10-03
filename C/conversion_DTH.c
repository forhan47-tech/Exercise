#include <stdio.h>

int main() {
    int decimal = 419; 
    char hex[32];
    int index = 0;


    while (decimal > 0) {
        int remainder = decimal % 16;
        hex[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        decimal /= 16;
    }

    printf("Hexadecimal equivalent: ");
    for (int i = index - 1; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");
    return 0;
}
