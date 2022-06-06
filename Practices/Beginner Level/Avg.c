#include<stdio.h>

int main()
{
    int num1, num2, num3, sum;
    float avg;
    printf("Enter 3 number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1+num2+num3;
    avg = (float)sum/3;
    printf("sum  = %d and avg = %.2f", sum, avg);

}
