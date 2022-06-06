#include<stdio.h>

int main()
{
    int n=5, row=1;

    for(int i=1; i<=n*2; i++)
    {
        for(int j=1; j<=row; j++)
        {
            printf("*");
        }
        printf("\n");

        if(i<n)
        {
            row++;
        }
        else
        {
            row--;
        }
    }
}
