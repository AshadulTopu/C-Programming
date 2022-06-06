#include<stdio.h>

int main()
{
    float base, height, area;

    printf("Enter the value of base: ");
    scanf("%f", &base);

    printf("Enter the value of height: ");
    scanf("%f", &height);

    area = (base*height)/2;

    printf("Area of triangle is %.2f sq units.\n", area);
}
