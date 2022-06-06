#include<stdio.h>

int main()
{
    for (int i = 0; i<100; i++)
    {
        if(i%2!=0)
        {
            printf("%d is a odd number.\n", i);
        }
        else
        {
            printf("%d is a even number.\n", i);
        }
    }
}
