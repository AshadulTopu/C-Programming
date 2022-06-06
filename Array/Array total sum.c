#include<stdio.h>

int main()
{
    int sum=0;
    int arra[10] = {6,5,8,4,3,7,8,10,25,20};
    for (int i=0; i<10; i++)
    {
        sum+=arra[i];
    }
    printf("total sum = %d", sum);
}
