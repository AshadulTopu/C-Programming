#include<stdio.h>

int main()
{
    int sum=0,num,i=1;

    printf("For 1+3+5+7+..............+n series \n");
    printf("Enter the last number of series: ");
    scanf("%d", &num);

    while(i<=num){
        sum+=i;
        i+=2;
    }
    printf("Sum of the series : %d\n", sum);
}


