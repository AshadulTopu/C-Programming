#include<stdio.h>

int main()
{

    char ch = 'c';
    int a,b, result;

    while(ch != 'q')
    {
        printf("Enter two number (5 9): ");
        scanf("%d %d", &a, &b);
        printf("Result = %d \n", result = a+b);

        printf("Press c for continue. or press q for quaite. ");
        scanf(" %c", &ch);
    }

}
