#include<stdio.h>

int main()
{
    int number_1, number_2;

    printf("Input first number: ");
    scanf("%d", &number_1);

    printf("Input last number: ");
    scanf("%d", &number_2);


    for(int i=number_1; i<= number_2; i++)
    {
        if(i%2==0)
        {
            printf("%d is even number.\n", i);

        }
        else
        {
            printf("%d is odd number.\n", i);
        }
    }
    main();
}
