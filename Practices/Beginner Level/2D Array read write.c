#include<stdio.h>

int main()
{
    int i,j,arr[3][4];

    ///2D array read
     for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("input the value of [%d][%d] ",i,j);
            scanf("%d", &arr[i][j]);

        }
    }
    printf("\n");
    ///print 2D array
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
}

