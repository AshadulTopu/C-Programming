#include<stdio.h>

int main()
{
    ///2D Array . 4 = Array size, 3 = index/value size.
    int arr[4][3] = {1,3,4,5,2,7,4,9,3,9,10,1};

    printf("Array [4][3] :%d \n", arr[3][2]);

    printf("Array: ");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    ///show any row.
    printf("Single Array: \n");
    for(int j=0; j<3; j++)
    {
        printf("%d ", arr[2][j]);
    }
    printf("\n");
}
