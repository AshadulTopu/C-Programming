#include<stdio.h>

printArray(int arr[], int siz)
{
    for(int i=0; i<siz; i++)
    {
        printf("% d", arr[i]);
    }
    printf("\n");
}

sort(int arr[], int size)
{
    int minPos, temp;
    for(int i=0; i<size; i++ )
    {
        minPos = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minPos])
            {
                temp = arr[minPos];
                arr[minPos] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(arr,size);
}


int main()
{
    int size = 5;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        printf("Please enter a value for [%d]:  ", i);///if we use i it will start form 0 index number, and if we use i+1 it will start form 1 index number.
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    printArray(arr,size);

    printf("Final Array: ");
    sort(arr, size);
}
