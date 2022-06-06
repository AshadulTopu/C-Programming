/*#include<stdio.h>

int main()
{
    int code1, units1,code2, units2;
    float  price1, sum1,price2, sum2, total_sum;

    scanf("%d %d %f ", &code1, &units1, &price1);
    sum1 = units1*price1;

    scanf("%d %d %f", &code2, &units2, &price2);
    sum2 = units2*price2;

    total_sum = sum1+sum2;
    printf("VALOR A PAGAR: R$ %0.2f\n", total_sum);
}
*/

#include<stdio.h>
int main()
{
    int code1, units1,code2, units2;
    float  price1,price2,total_sum;
    scanf("%d %d %f ", &code1, &units1, &price1);
    scanf("%d %d %f", &code2, &units2, &price2);
    total_sum = (units1*price1) + (units2*price2);
    printf("VALOR A PAGAR: R$ %0.2f\n", total_sum);
}
