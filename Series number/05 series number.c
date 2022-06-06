#include<stdio.h>

int main()
{
    int sum=0,num,i=2;

    printf("For 2+4+6+8+..............+n series \n");
    printf("Enter the last number of series: ");
    scanf("%d", &num);

    while(i<=num){
        sum+=i;
        printf("Sum of the series : %d\n", sum);
        i+=2;
    }
    printf("Sum of the series : %d\n", sum);
}

