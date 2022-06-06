#include<stdio.h>

int main()
{
    int num1,num2,n1,n2,remender, gcd, lcm;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while(n2!=0)
    {
        remender = n1%n2;
        n1=n2;
        n2=remender;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
}
