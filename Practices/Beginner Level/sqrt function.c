#include<stdio.h>

int main()
{
    /*we will find out any value's roots roots value with sqrt()'
    this function show output with double data type. */

    double result = sqrt(25);
    printf("%.2lf\n", result);

    double X = sqrt(49);
    printf("%.2lf\n", X);

    double Y = sqrt(16);
    printf("%.2lf\n", Y);
    //test
    double Z = sqrt(15);
    printf("%.2lf\n", Z);

    int M=64;
    double N = sqrt(M);
    printf("%.2lf\n", N);
}
