#include<stdio.h>

int main()
{
    int arr[20] = {1,3,5,4,6,8,9,10,21,31,14,19,25,29,34,53,60,27,13,49};
    int total_sum;
    int even_sum;
    int odd_sum;
    for(int i = 0; i < 20; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d index %d is a even number.\n", i, arr[i]);
            even_sum += arr[i];
            total_sum += arr[i];
        }
        else
        {
            printf("%d index %d is a odd number.\n", i, arr[i]);
            odd_sum += arr[i];
            total_sum += arr[i];
        }

    }
    printf("Total even sum = %d\n", even_sum);
    printf("Total odd sum = %d\n", odd_sum);
    printf("Total sum = %d\n", total_sum);
}
