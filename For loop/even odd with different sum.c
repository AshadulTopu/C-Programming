#include<stdio.h>

int main()
{
    int i, sum = 0, even_sum=0, odd_sum=0;

    for (i = 0; i <100; i++)
        if(i%2==0)
    {
        printf("%d is a even number\n", i);
        even_sum +=i;
        sum+=i;
    }
    else
    {
        printf("%d is a odd number\n", i);
        odd_sum +=i;
        sum+=i;
    }
    printf("total even sum = %d\n", even_sum);
    printf("total odd sum = %d\n", odd_sum);
    printf("total sum = %d", sum);
}
