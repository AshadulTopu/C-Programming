#include<stdio.h>

int main()
{
    int a, b,c;

    printf("Enter the value of number 1: ");
    scanf("%d", &a);

    printf("Enter the value of number 2: ");
    scanf("%d", &b);

    printf("Before swapping A = %d and B = %d\n", a,b);

    c=a;
    a=b;
    b=c;
    printf("After swapping A = %d and B = %d\n", a,b);
}
