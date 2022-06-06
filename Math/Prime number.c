#include<stdio.h>

int main()
{
    int number, count = 0;
    printf("Input a integer number: ");
    scanf("%d", &number);

    for (int i=2; i<number; i++)
    {
        if(number%i==0)
        {
            count++;
        }

    }
    if(count==0)
    {
        printf("%d is Prime number.");
    }
    else
    {
        printf("%d is not Prime nuber.");
    }

}
