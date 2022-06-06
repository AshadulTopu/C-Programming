#include<stdio.h>

///Array indexing function.
void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++){
        printf(" %d" , arr[i]);

    }
    printf("\n");
}
int main(){
    ///Value initialize
    int minPos, size=5, temp;
    int arr[size]; // = {20,15,17,5,10};
    for (int k = 0; k < size; k++)
    {
        printf(" Please enter your value [%d]", k+1);
        scanf("%d", &arr[k]);

    }

    ///Array indexing function call.
    printf("array: ");
    printArray(arr,size);
    printf("\n");

    ///Looping
    for (int i=0; i<=size; i++)
    {
        minPos = i;
        for(int j=i+1; j<size; j++)
        {
            ///Mini VS Max checking.
            if(arr[j] < arr[minPos] )
            {
                printf("Mini Posi = %d\n" ,minPos);
                printf("Before swap = %d %d \n", arr[minPos], arr[j]);
                ///swaping
                temp = arr[minPos];
                arr[minPos] = arr[j];
                arr[j] = temp;
                printf("After swap = %d %d\n", arr[minPos], arr[j]);
                printArray(arr, size);
                printf("\n");
            }
            else{
                printf("not swap = %d %d\n", arr[minPos], arr[j]);
                printf("\n");
            }
        }
    }
    ///final sort array print.
    printf("final sort array: ");
    printArray(arr,size);
}



