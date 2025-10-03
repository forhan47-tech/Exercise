#include <stdio.h>

int main() {
    int totalDays, years, weeks, days, daysPerYear;
    char leap;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    printf("Is it a leap year? (y/n): ");
    scanf(" %c", &leap);

    daysPerYear = (leap == 'y' || leap == 'Y') ? 366 : 365;

    years = totalDays / daysPerYear;
    weeks = (totalDays % daysPerYear) / 7;
    days  = (totalDays %  daysPerYear) % 7;

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days  : %d\n", days);
    return 0;
}
