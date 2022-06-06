#include<stdio.h>

int main()
{
    int num, temp, r, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp!=0)
    {
        r=temp % 10;
        reverse=reverse*10 + r;
        temp /= 10;
    }
    printf("reverse of digits: %d\n", reverse);
}

