#include<stdio.h>
//find months and remaining day from total days.
int main()
{
    int day , months, remaining_day;
    printf("Input the value of days: ");
    scanf("%d", &day);

    months = day/30;
    printf("The month is = %d\n", months);

    remaining_day = day % 30;
    printf("The remaining day is = %d\n", remaining_day);
}
