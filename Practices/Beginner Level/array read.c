#include<stdio.h>

int main()
{
    ///array read
    int n;
    printf("enter how many element you want to be input: ");
    scanf("%d", &n);

    int num[n],i;
    for(i=0; i<n; i++){
        printf("Input element[%d]", i);
        scanf("%d", &num[i]);
    }

    ///array write
    for(i=0; i<n; i++)
    {
        printf("%d ", num[i]);
    }
}
