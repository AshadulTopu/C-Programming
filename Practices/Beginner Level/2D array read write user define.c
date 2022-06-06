#include<stdio.h>

int main()
{
    int row_size,col_size;
    printf("Enter row & column size: ");
    scanf("%d %d", &row_size,&col_size);
    int i,j,arr[row_size][col_size];

    ///2D array read
     for(i=1; i<=row_size; i++)
    {
        for(j=1; j<=col_size; j++)
        {
            printf("input the value of [%d][%d] ",i,j);
            scanf("%d", &arr[i][j]);

        }
    }
    printf("\n");
    ///print 2D array
    for(i=1; i<=row_size; i++)
    {
        for(j=1; j<=col_size; j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
}


