#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int add(int a,int b)
{
    int x = a+b;
    return x;
}

double div (double a, double b)
{
    return a/b;
}
int main()
{
    int Sum = sum(10,15);
    printf("This is a function value sum = %d\n" ,Sum);

    int sum = add(15,15);
    printf("This is a function value sum = %d\n" ,sum);

    double Div = div(10,3);
    printf("This is a function value div = %lf\n", Div);
}
