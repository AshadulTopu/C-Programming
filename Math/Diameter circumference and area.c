#include<stdio.h>

int main()
{
    float radius, diameter, circumference, area;

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    diameter = 2*radius;
    printf("Diameter of circle is = %f\n", diameter);

    circumference =  2*3.1416*radius;
    printf("circumference of circle is = %f\n", circumference);

    area = 3.1416*radius*radius;
    printf("area of circle is = %f\n", area);
}
