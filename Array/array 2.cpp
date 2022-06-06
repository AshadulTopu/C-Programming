#include<stdio.h>

int main()
{
    int array[10]= {1,5,6,2,10,15,20,23,25,30};
    int sum=0;
    for(int i=0; i<10; i++)
    {
        sum+=array[i];
    }
    printf("%d",sum);
}

