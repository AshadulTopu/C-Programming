
#include<stdio.h>

arrayFunction(int arr[], int size )
{
    for(int i=0; i<size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

swapFunction (int arr[], int *minPos, int *j)
{
    int temp;
    temp = arr[*minPos];
    arr[*minPos] = arr[*j];
    arr[*j] = temp;
}

sortFunction(int arr[], int size)
{
    int minPos;
    for(int i=0; i<size; i++)
    {
        minPos = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minPos])
            {
                swapFunction(arr, &minPos, &j);
            }
        }
    }
    arrayFunction(arr, size);
}


int main(){

int size=10;
int arr[size];
for(int i = 0; i<size; i++)
    {
        printf("enter your value [%d] ", i+1);
        scanf("%d", &arr[i]);
    }
printf("Array: ");
arrayFunction(arr, size);

printf("Final Array: ");
sortFunction(arr, size);

}
