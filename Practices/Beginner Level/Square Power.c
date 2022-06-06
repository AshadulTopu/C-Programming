
#include<stdio.h>

int main()
{
    double result = pow(5,2);
    printf("%.2lf\n", result);

    double x = pow(4,2);
    printf("%.2lf\n", x);

    double y = pow(7,2);
    printf("%.2lf\n", y);

    double z = pow(5,3);
    printf("%.2lf\n", z);

    int m,n;
    printf("Please enter first value: ");
    scanf("%d", &m);
    printf("Please enter second value: ");
    scanf("%d", &n);

    double square = pow(m,n);
    printf("%.2lf", square);

}
