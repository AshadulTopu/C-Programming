#include<stdio.h>

int main()
{
    int i,start;

    printf("Input first number: ");
    scanf("%d", &start);

    for(i=0; i<=100; i++)
    {
        if(i%2==0)
        {
            printf("%d is even number.\n", start);
        }
        else
        {
            printf("%d is odd number.\n", start);
        }
    }
}
