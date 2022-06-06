#include<stdio.h>

int main()
{
    int arr[100];
    int multiplier_3,multiplier_5,multiplier_7;

    for (int i=0; i<100; i++)
    {
        arr[i] =i;


        if(arr[i]%3==0)
        {
            multiplier_3++;

        }
         if(arr[i]%5==0)
        {
            multiplier_5++;

        }
        if(arr[i]%7==0)
        {
            multiplier_7++;

        }

    }
    printf("Multiplier of 3 is = %d\n", multiplier_3);
    printf("Multiplier of 5 is = %d\n", multiplier_5);
    printf("Multiplier of 7 is = %d\n", multiplier_7);
}
