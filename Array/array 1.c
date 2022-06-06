#include<stdio.h>

int main()
{
    int array[10]= {1,5,6,2,10,15,20,23,25,30};

    for(int i=0; i<10; i++)
    {
        if(array[i]%2==0)
        {
            printf("%d => %d => Even\n", i, array[i]);
        }
        else
        {
            printf("%d => %d => odd\n", i, array[i]);
        }
    }

}
