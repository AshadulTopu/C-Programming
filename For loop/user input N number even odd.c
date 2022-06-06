#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first positive value: ");
    scanf("%d", &num1);
    printf("Enter the last positive value: ");
    scanf("%d", &num2);

    for (int i = num1; i<num2; i++)
    {
        if(i%2==0)
        {
            printf("\n %d is a even number\n ", i);
        }
        else
        {
            printf("\n %d is a odd number\n ", i);
        }
    }
}
