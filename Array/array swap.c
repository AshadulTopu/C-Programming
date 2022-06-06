#include<stdio.h>

void swap(int a[])
{
    int z = a[1];
    a[1] = a[0];
    a[0] = z;
}

int main()
{
    int arr [10] = {5,2,4,6,};
    printf("0 => %d & 1 => %d\n", arr[0], arr[1]);
    swap(arr);
    printf("0 => %d & 1 => %d\n", arr[0], arr[1]);
}
