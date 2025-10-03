#include <stdio.h>

int main() {
    char str[] = "12345";
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');  // num = (num << 3) + (num << 1) + (str[i] - '0') 
        } else {
            printf("Invalid character '%c' in input.\n", str[i]);
            return 1;
        }
    }

    printf("Converted integer: %d\n", num);
    return 0;
}
