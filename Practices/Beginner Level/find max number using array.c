#include<stdio.h>

int main()
{
    int x;
    printf("Enter how many element you want to be input: ");
    scanf("%d", &x);
    int test[x], i, max = test[0];

    for(i=0; i<x; i++)
    {
        printf("Input element: [%d]",i);
        scanf("%d", &test[i]);
    }

    for(i=0; i<x; i++)
    {
        printf("2nd loops: %d\n", test[i]);
        if( max < test[i] )
        {
            max = test[i];
            printf("Max: %d\n", max);
        }
    }
    printf("Maximum number: %d", max);
}
