#include <stdio.h>

int main() {
    long long num;  
    int freq[10] = {0};  // Array to count digits 0–9

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;

    if (num == 0) {
        freq[0] = 1;
    } else {
        while (num > 0) {
            int digit = num % 10;
            freq[digit]++;
            num /= 10;
        }
    }

    printf("Digit frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0)
            printf("Digit %d: %d time(s)\n", i, freq[i]);
    }

    return 0;
}
