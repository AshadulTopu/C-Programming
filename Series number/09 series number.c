#include<stdio.h>

int main()
{
    int sum=0,num1,i=1;

    printf("For 1^2+ 2^2 + 3^2 + 4^2 + 5^2 +..............+n series \n");
    printf("Enter the last  number of series: ");
    scanf("%d", &num1);

    while(i<=num1){
        sum+=i*i;
        printf("Sum of the series : %d\n", sum);
        i+=1;
    }
    printf("Sum of the series : %d\n", sum);
}




