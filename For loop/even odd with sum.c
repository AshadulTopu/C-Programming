#include<stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 0; i <100; i++)
        if(i%2==0)
    {
        printf("%d is a even number\n", i);
        sum+=i;
    }
    else
    {
        printf("%d is a odd number\n", i);
        sum+=i;
    }
    printf("total sum = %d", sum);
}
