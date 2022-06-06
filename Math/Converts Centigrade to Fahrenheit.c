#include<stdio.h>

int main()
{
    float centigrade, fahrenheit;

    printf("Input temperature(in Centigrade: )");
    scanf("%f", &centigrade);

    fahrenheit = (centigrade*9/5)+32;

    printf("%.2f degrees Fahrenheit",fahrenheit);
}
