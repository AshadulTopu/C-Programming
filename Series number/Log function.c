#include<stdio.h>

int main()
{
    double x =10.5;
    double result = log(x);

    printf("Log(%.2lf) = %.2lf \n", x, result);

    double y =1;
    double output = log(y);

    printf("Log10(%.2lf) = %.2lf \n", y, output);

}
