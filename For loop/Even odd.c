#include<stdio.h>

int main()
{
    int number;
    printf("\n Enter a positive number: ");
    scanf("%d", &number);
    if (number%2==0)
    {
        printf("\n %d is a even number.\n", number);

    }
    else
    {
        printf("\n %d is negative number.\n", number);
    }
    main();
}
