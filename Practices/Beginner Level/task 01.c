#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d",&size);
    int arr[size];

    for (int i=0; i<size; i++){
        printf("\nEnter the element of array [%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
