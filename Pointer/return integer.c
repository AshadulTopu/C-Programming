#include<stdio.h>

int sum (int *a, int size)
{
    int sum =0;
    for (int i=0; i<size; i++)
    {
        sum += *(a+i);
    }
    return sum;
}

int main()
{
    int arr [5] = {2,5,6,7,3};
    int result = sum(arr, 5);
    printf("Sum of the array is: %d", result);
}
