#include<stdio.h>
int main()
{
    int a, b, x, y, sum;

    printf("Input value of a: ");
    scanf("%d", &a);

    printf("Input value of b: ");
    scanf("%d", &b);

    printf("Input value of x: ");
    scanf("%d", &x);

    printf("Input value of y: ");
    scanf("%d", &y);

    sum = (a*b)+(x*y);

    printf("(a*b)+(x*y)= %d", sum);
}
