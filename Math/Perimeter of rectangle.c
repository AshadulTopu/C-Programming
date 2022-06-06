#include<stdio.h>

int main()
{
    float length, width, perimeter, area;

    printf("Enter the value of length: ");
    scanf("%f", &length);

    printf("Enter the value of width: ");
    scanf("%f", &width);

    perimeter = 2*(length+width);
    printf("perimeter of rectangle is = %f\n", perimeter);

    area = length*width;
    printf("area of rectangle is = %f\n", area);
}
