#include<stdio.h>

int main() {
    int days, months, years, week, tdays;
    
    printf("Enter the total no of days:");
    scanf("%d", &tdays);

    years = tdays / 365;
    printf("Years %d\n", years);
    tdays = tdays % 365;

    months = tdays / 30;
    printf("Months %d\n", months);
    tdays = tdays % 30;

    week = tdays / 7;
    printf("Weeks %d\n", week);
    tdays = tdays % 7;

    days = tdays;
    printf("Days %d\n", days);

    return 0;
}