#include<stdio.h>

int main()
{
    int sum=0,num1,num2,num3,i=1,j=2,k=3;

    printf("For 1*2*3 + 2*3*4 + 3*4*5 + 4*5*6 + 5*6*7 + 6*7*8 +..............+n series \n");
    printf("Enter the last Three(1 2 3) number of series: ");
    scanf("%d %d", &num1, &num2, &num3);

    while(i<=num1 && j<=num2 && k<=num3){
        sum+=i*j*k;
        printf("Sum of the series : %d\n", sum);
        i+=1;
        j+=1;
        k+=1;
    }
    printf("Sum of the series : %d\n", sum);
}



