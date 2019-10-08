// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.
/*
Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/
#include<stdio.h>
int main()
{
    int inputDays=1329, years, weeks, days, remaining_days;

    years = inputDays/365;
    printf("Years : %d\n", years);

    remaining_days = inputDays%365;

    weeks = remaining_days/7;
    printf("Weeks : %d\n", weeks);

    remaining_days = remaining_days%7;

    days = remaining_days;
    printf("Days : %d\n", days);
    return 0;
}
