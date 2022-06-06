#include<stdio.h>
///There has problem.
int main()
{
    
    int num1, num2, result;
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number: ");
    scanf("%d", &num2);
    char symbol;
    
    printf(" Enter symbol which operation you want (like +,-,*,/,%): ");
    scanf("%c", &symbol);

    ///printf("Enter symbol which operation you want: ");
    ///scanf("%c", &symbol);

    if (symbol == '+')
    {
        printf("This is summation. %d and %d summation is %d\n", num1, num2,result = num1 + num2 );
    }
    else if (symbol == '-')
    {
        printf("This is subtraction. %d and %d subtraction is %d\n", num1, num2,result = num1 - num2 );
    }
    else if (symbol == '*')
    {
        printf("This is multiplication. %d and %d multiplication is %d\n", num1, num2,result = num1 * num2 );
    }
    else if (symbol == '/')
    {
        printf("This is division. %d and %d division is %d\n", num1, num2,result = num1 / num2 );
    }
    else if (symbol == '%')
    {
        printf("This is modulus. %d and %d modulus is %d\n", num1, num2,result = num1 % num2 );
    }
    else
    {
        printf("This is wrong input.\n");
    }
    main();
}
