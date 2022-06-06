#include<stdio.h>

int main()
{
    int n=5, star=1, space=4;

    for (int i=1; i<10; i++)
    {
        for (int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<star*2; j++)
        {
            printf("*");
        }
         printf("\n");

         if (i<n)
         {
             space--;
             star++;
         }
         else
         {
             space++;
             star--;
         }
    }
}
