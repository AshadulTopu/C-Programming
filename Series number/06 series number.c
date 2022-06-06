#include<stdio.h>

int main()
{
    int sum=0,num1,num2,i=1,j=2;

    printf("For 1*2 + 2*3 + 3*4 + 4*5 + 5*6 + 6*7 +..............+n series \n");
    printf("Enter the last two(1 2) number of series: ");
    scanf("%d %d", &num1, &num2);

    while(i<=num1 && j<=num2){
        sum+=i*j;
        printf("Sum of the series : %d\n", sum);
        i+=1;
        j+=1;
    }
    printf("Sum of the series : %d\n", sum);
}


