#include<Stdio.h>
/// there is problem

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int is_leap_year = 0;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        is_leap_year = 1;
    }

    if (is_leap_year)
    {
        printf ("%d is a leap year.\n", year);
    }
    else
    {
        printf ("%d is not a leap year.\n", year);
    }
    main();
}
