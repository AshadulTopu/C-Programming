#include<stdio.h>

void printArray(int arr[], int size){
for (int i=0; i<size; i++){
    printf("% d", arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int size){
    int M,temp;
    for (int i=0; i<size-1; i++){ ///size-1 it's important comparative programming.
    M = 0;
    printf("initial M = %d\n", M);
    for (int j=M+1; j<size; j++ ){
        printf("M = %d \n", M);
        printf("j = %d \n", j);

            if(arr[j]<arr[M])
            {
                printf("before swap = %d %d \n", arr[M], arr[j]);
                temp = arr[M];
                arr[M] = arr[j];
                arr[j]= temp;
                printf("after swap = %d %d \n", arr[M], arr[j]);
                printArray(arr, size);
                printf("\n");
            }
            else{
                printf("not swap = %d %d \n", arr[M], arr[j]);
                printf("\n");
            }
        M++;
        }
    }
    printf("Final array: ");
    printArray(arr, size);
}
int main()
{
int size = 5;
int arr[size];
for (int k=0; k<size; k++){
    printf("Please enter your value [%d]:", k+1);
    scanf("%d", &arr[k]);
    }
    printf("Array: ");
    printArray(arr, size);
    printf("\n");
    printf("Sorting: \n");
    sort(arr,size);

}
