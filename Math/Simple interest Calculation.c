#include<stdio.h>
#include<math.h>

int main()
{
    float capital, interest, time, rate;

    printf("Input the value of capital(amount): ");
    scanf("%f", &capital);

    printf("Input the value of interest rate: ");
    scanf("%f", &rate);

    printf("Input the time: ");
    scanf("%f", &time);

    interest = capital*(pow(( 1 + rate/100)*time);
    printf("total interest is = %f", interest);
}
