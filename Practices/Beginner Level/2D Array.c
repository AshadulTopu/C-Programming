#include<stdio.h>

int main()
{
    int i,j;
    int arr[3][4]={ {3,4,5,8},{10,11,12,15},{21,22,23,27} };

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
