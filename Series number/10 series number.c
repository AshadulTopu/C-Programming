#include<stdio.h>

int main()
{
   double sum=0,num1,i=1;

    printf("For 1+ 1/2 + 1/3 + 1/4 + 1/5 +..............+n series \n");
    printf("Enter the last  number of series: ");
    scanf("%lf", &num1);

    while(i<=num1){
        sum+=(1/i);
        printf("Sum of the series : %lf\n", sum);
        i++;
    }
    printf("Sum of the series : %lf\n", sum);
}





