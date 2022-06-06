#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many element you want to be input: ");
    scanf("%d", &n);
    int num[n],i,value,position;
    for (i=0; i<n; i++)
    {
        printf("input element: [%d]", i);
        scanf("%d", &num[i]);
    }
    printf("Enter which value you search: ");
    scanf("%d", &value);
    for(i=0; i<n; i++)
    {
        if(value == num[i])
        {
            position=i+1;
            printf("Your entered number %d position %d", value, position);
            break;
        }
    }
    if(value != num[i])
    {
        printf("Number not found\n");
    }
}
