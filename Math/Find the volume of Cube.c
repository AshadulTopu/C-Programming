#include<stdio.h>

int main()
{
    int length, base, height, volume;
    printf("Input the value of length: ");
    scanf("%d", &length);

    printf("Input the value of base: ");
    scanf("%d", &base);

    printf("Input the value of height: ");
    scanf("%d", &height);

    volume = length*base*height;
    printf("The volume of cube is = %d", volume);
}
