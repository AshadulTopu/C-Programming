#include<stdio.h>

int main()
{
    int n=5, row=5, space=4;
    for (int i=1; i<n*2; i++)
    {
         for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=row*2; j++)
        {
            printf("*");
        }

        printf("\n");
        if(i<n)
    {
        space++;
        row--;
    }
    else
    {
        space--;
        row++;
    }
    }

}
