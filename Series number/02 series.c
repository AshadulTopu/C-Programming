#include<stdio.h>

int main()
{
    int sum=0,num,i;

    printf("For 1+3+5+7+..............+n series \n");
    printf("Enter the last number of series: ");
    scanf("%d", &num);

    for(i=1; i<=num; i+=2){
        sum+=i;
    }
    printf("Sum of the series : %d\n", sum);
}

