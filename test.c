#include<stdio.h>

int test(int a, int b)
{
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int x = a+b;
    printf("Summation of two number = %d", x);
    return x;
}

int main()
{
    test();
}
