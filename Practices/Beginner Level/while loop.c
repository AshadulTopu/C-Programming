#include<stdio.h>

int main()
{
    int sum=0, num;
    char ch='Y';

    while(ch == 'Y')
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum+=num;
        printf("Total sum %d\n", sum);
        printf("Select Y for continue or N for exit: ");
        scanf(" %c", &ch);
    }
}
