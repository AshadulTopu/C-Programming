#include<stdio.h>

int main()
{
    int n=5, row=1, col, space=4;

    for ( row=0; row<n*2; row++)
    {
        for(int col=9; col>space; col--)
        {
            printf(" ");
        }
        for (int col=0; col<row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
