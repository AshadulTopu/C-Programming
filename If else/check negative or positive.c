#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number>=0)
    {
        printf("\n %d is a positive number.\n", number);
    }
    else
    {
        printf("\n %d is a negative number.\n", number);
    }
    main();
}
