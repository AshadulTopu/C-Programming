#include<stdio.h>

int main()
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    if(number>=0)
    {
        if (number>0)
        {
            printf("%d is a positive number.\n", number);
        }
        else
        {
            printf("%d is Zero.\n", number);
        }
    }
    else
    {
        printf("%d is a negative number.\n", number);
    }
}
