#include<stdio.h>

int main()
{
    int first_angle, second_angle, third_angle;

    printf("Enter two angle of triangle: ");
    scanf("%d %d", &first_angle, &second_angle);

    third_angle = 180 - (first_angle + second_angle);
    printf("Third angle of the triangle is = %d\n", third_angle);
}
