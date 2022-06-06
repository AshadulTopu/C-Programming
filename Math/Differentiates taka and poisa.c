#include<stdio.h>

int main()
{
    int taka, poisa;
    float a;

    printf("Enter your money amount:  ");
    scanf("%f", &a);

    taka = a;
    printf ("Total taka = %d\n", taka);

    poisa = (a-taka)*100;
    printf("Total poisa is = %d\n", poisa );
    main();
}
