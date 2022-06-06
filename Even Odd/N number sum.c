#include<stdio.h>

int main()
{
    int number_1, number_2, sum;

    printf("Input first number: ");
    scanf("%d", &number_1);

    printf("Input last number: ");
    scanf("%d", &number_2);

    for(int i=number_1; i<=number_2; i++)
    {
        sum+=i;
        printf("N number sum = %d\n", sum);
    }
    main();
}


