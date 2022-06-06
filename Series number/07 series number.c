#include<stdio.h>

int main()
{
    int sum=0,num1,num2,i=2,j=2;

    printf("For 2*2 + 4*4 + 6*6 + 8*8 + 10*10 +..............+n series \n");
    printf("Enter the last two(2 2) number of series: ");
    scanf("%d %d", &num1, &num2);

    while(i<=num1 && j<=num2){
        sum+=i*j;
        printf("Sum of the series : %d\n", sum);
        i+=2;
        j+=2;
    }
    printf("Sum of the series : %d\n", sum);
}



