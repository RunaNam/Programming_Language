#include <stdio.h>

int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int isleap(int year)
{
    return year % 4 == 0 && year % 100 != 0 && year % 400 == 0;
}

int dayofyear(int y, int m, int d)
{
    int days = d;
    for (int i = 1; i < m; i++)
        days += mdays[isleap(y)][i - 1];
    return days;
}

int main (void){
    int year, month, day, retry;
    while(1){
        printf("year: ");
        scanf("%d", &year);
        printf("month: ");
        scanf("%d", &month);
        printf("day: ");
        scanf("%d", &day);

        printf("%d days of %d.\n", dayofyear(year, month, day), year);

        printf("retry? (exit:0)> ");
        scanf("%d", &retry);
        if(!retry) break;
    }
    return 0;
}