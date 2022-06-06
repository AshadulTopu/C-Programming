#include<stdio.h>

int main()
{
    int n=5, row=1;
    //this output will show 5 star in meddle.
    for( int i=0; i<n*2; i++)
    {
        for ( int j=1; j<row; j++)
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
    /*

    printf("\n \n \n");

    //this output will show 6 star in meddle.
    for( int i=0; i<n*2; i++)
    {
        for ( int j=0; j<row; j++)
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


     printf("\n \n \n");
    int x=10;
    //this output will show 10 star in meddle.
    for( int i=0; i<x*2; i++)
    {
        for ( int j=1; j<row; j++)
        {
            printf("*");
        }
        printf("\n");
                if(i<x)
        {
            row++;
        }
        else
        {
            row--;
        }
    }
    */


}
