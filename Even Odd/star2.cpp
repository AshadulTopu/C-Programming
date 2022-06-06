#include <stdio.h>

int main()
{
    int n = 5, row = 1,space=4;
    for(int i = 1; i < n*2; i++)
    {
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < row; j++)
        {
            printf("*");
        }
        printf("\n");

        if(i < n)
        {
            row++;
            space--;
        }
        else
        {
            row--;
            space++;
        }


    }

}
/**/


