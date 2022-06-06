#include<stdio.h>

int main()
{
    int num, count=0,i;
    while(1){
    printf("Enter a positive number: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        printf("Prime Number.\n");
    }
    else{
        printf("Not Prime Number.\n");
    }
}
}
