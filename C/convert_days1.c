#include <stdio.h>

int main() {
    int totalDays, years, months, days;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    months = (totalDays % 365) / 30;
    days = (totalDays % 365) % 30;

    printf("\nYears : %d\n", years);
    printf("Months: %d\n", months);
    printf("Days  : %d\n", days);
    return 0;
}
