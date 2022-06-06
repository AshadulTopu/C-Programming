#include<stdio.h>
///this is array function.
printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
///this is accending sort function
AccendingSortFunction(int arr[], int size)
{
    int minPos, temp;
    for(int i=0; i<size; i++)
    {
        minPos =i;
        for(int j=0; j<size; j++)
        {
            if(arr[j] > arr[minPos])
            {
                temp = arr[minPos];
                arr[minPos] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(arr,size);
}
///this is descending sort function
DescendingSortFunction(int arr[], int size)
{
    int minPos, temp;
    for(int i=0; i<size; i++)
    {
        minPos =i;
        for(int j=0; j<size; j++)
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
///this is main function.
int main()
{
    int size =10;
    int arr[size] = {5,10,60,48,31,80,57,10,25,64};

    printf("Array :");
    printArray(arr,size);

    char ch;
    printf("enter A or a for Accending or enter D or d for Descending. ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'a')
    {
        AccendingSortFunction(arr,size);
    }
    else if (ch =='D' && ch == 'a')
    {
        DescendingSortFunction(arr,size);
    }
    else
    {
        printf("You enter wrong key.");
    }

}
