#include<stdio.h>

int main()
{
    float centigrade, fahrenheit;

    printf("Input temperature(in Fahrenheit):");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit-32)*5/9;

    printf("%.2f degrees centigrade\n", centigrade);
}
