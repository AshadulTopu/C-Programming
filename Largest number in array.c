#include<stdio.h>

int main()
{
    int number, arr[10], max=0;
    printf("Enter how many integer number you want: ");
    scanf("%d", &number);

    for (int i=0; i<number; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i=1; i<number; i++)
    {
        if(max < arr[i])
           {
               max = arr[i];
           }
    }
    printf("%d is max number.", max);
}
