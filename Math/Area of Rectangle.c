#include<stdio.h>

int main()
{
    int length, width, area;
    printf("Input the value of length : ");
    scanf("%d", &length);

    printf("Input the value of width");
    scanf("%d", &width);

    area = length * width;
    printf("The area of Rectangle is = %d", area);
}
