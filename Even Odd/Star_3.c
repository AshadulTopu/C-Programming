#include<stdio.h>

int main()
{
    int n=5, row=1, space=10;

    for(int i=1; i<n*2; i++)
    {
       for(int j=1; j<space; j++)
       {
            printf("* ");
       }
       for(int j=0; j<row; j++)
        printf(" ");

    printf("\n");

        if(i<n)
        {
            space--;
            row++;
        }
        else
        {
            space++;
            row--;
        }
    }


}

