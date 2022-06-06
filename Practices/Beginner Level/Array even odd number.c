#include<stdio.h>

int main()
{
    int even, odd;
    int arr[10] = {5,8,4,3,6,9,2,1,7,0};
    printf("Array = ");
    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);

        if(arr[i]%2==0){
            even = arr[i];
        }
        else
        {
            odd = arr[i];
        }
    }
    printf("\n");

    printf("Array_Even: %d\n", even);
    printf("Array_Odd: %d\n", odd);
}
