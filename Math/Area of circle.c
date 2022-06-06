#include<stdio.h>

int main()
{
    float radius, area;

    printf("Enter circle radius : ");
    scanf("%f", &radius );

    area = 3.1416*radius*radius;
    printf("Area of circle is : %f", area);
}
