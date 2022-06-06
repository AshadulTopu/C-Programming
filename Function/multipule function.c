#include<stdio.h>

int function1()
{
    return 125;
}

int function2()
{
    return 680;
}

int function3()
{
    return function1() + function2();
}
int main ()
{
    int x = function3();
    printf("sum of function1 + funtion2 = %d\n", x);
}
