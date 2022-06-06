#include<stdio.h>
int main()
{

    int Num_1, Num_2, sum, sub, multiple, division, modulus;

    printf("Input a Number: ");
    scanf("%d", &Num_1);

    printf("Input a number: ");
    scanf("%d", &Num_2);

    sum = Num_1+Num_2;
    printf("%d + %d Summation= %d\n", Num_1, Num_2, sum);

    sub = Num_1 - Num_2;
    printf("%d - %d Subtraction= %d\n", Num_1, Num_2, sub);

    multiple = Num_1 * Num_2;
    printf("%d * %d Multiplication = %d\n", Num_1, Num_2, multiple);

    division = Num_1 / Num_2;
    printf("%d / %d division = %d\n", Num_1, Num_2, division);

    modulus = Num_1 % Num_2;
    printf("%d %% %d Modulus = %d\n", Num_1, Num_2, modulus);
}
