#include<stdio.h>

int main()
{
    int s=5, array_1[5]={10,20,30,40,50}, array_2[s],i;

    for(i=0; i<s; i++)
    {
        printf("%d ", array_1[i]);
    }
    printf("\n\nCopy array\n\n");
    ///copying array_1 to array_2.
     for(i=0; i<s; i++)
    {
        array_2[i]=array_1[i];
        printf("%d ", array_2[i]);
    }
    getch();
}
