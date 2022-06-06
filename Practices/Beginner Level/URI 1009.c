/*
#include<stdio.h>

int main()
{
    float salary, total_sell, total_salary;
    char name[50];
    scanf("%s", name);
    scanf("%f", &salary);
    scanf("%f", &total_sell);
    total_salary = salary + ((total_sell*15)/100);
    printf("TOTAL = R$ %0.2f\n", total_salary);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char name[20];
    double salary, total_sell, total_salary;
    scanf("%s", name);
    scanf("%lf %lf", &salary, &total_sell);
    total_salary = salary + (0.15*total_sell);
    printf("TOTAL = R$ %0.2lf\n", total_salary);
    return 0;
}

