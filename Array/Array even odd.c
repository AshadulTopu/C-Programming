#include<stdio.h>

int main()
{
    int arra[10] = {2,3,5,8,6,7,9,10,15,23};
    for(int i = 0; i < 10; i++)
    {
        if(arra[i]%2==0)
        {
            printf("%d index %d number is even.\n", i, arra[i]);
        }
        else
        {
            printf("%d index %d number is odd. \n", i, arra[i]);
        }
    }


}
