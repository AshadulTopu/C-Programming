#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping number A=%d and B=%d\n",a,b);

    a = a^b;
    b = a^b;
    a = a^b;


    printf("After swapping number A = %d and B = %d\n", a,b);
}
