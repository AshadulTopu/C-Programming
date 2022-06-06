#include<stdio.h>

int main()
{
    int number;

    printf("Input a number: ");
    scanf("%d", &number);

    if(number%2==0)
    {
        printf("%d is even number.\n", number);
    }
    else
    {
        printf("%d is odd number.\n", number);
    }
    main();
}
