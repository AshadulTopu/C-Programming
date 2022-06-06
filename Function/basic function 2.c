#include<stdio.h>

int value()
{
    return 1;
}

int main()
{
    int x;
    x = value();
    printf("this is a function value x = %d\n", x);
    printf("This is a function value %d\n", value());
}
