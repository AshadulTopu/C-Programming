#include<stdio.h>
int main()
{
    int height, base;
    float area = 0;

    printf("Input the value of Height : ");
    scanf("%d", &height);

    printf("Input the value of Base : ");
    scanf("%d", &base);

    area = 0.5*base*height;
    printf("The area of triangle is : %f\n", area);
}
