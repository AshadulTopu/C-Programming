#include<stdio.h>

void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++){
        printf(" %d" , arr[i]);

    }
    printf("\n");
}
int main(){
    int minPos, size=5, temp;
    int arr[size] = {20,15,17,5,10};
    printf(" Please enter your value : ");
    scanf("%d", &arr[0]);

    printf("array: ");
    printArray(arr,size);
    printf("\n");

    for (int i=0; i<=size; i++)
    {
        minPos = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minPos] )
            {
                temp = arr[minPos];
                arr[minPos] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("final sort array: ");
    printArray(arr,size);
}



