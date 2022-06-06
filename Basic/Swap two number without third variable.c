#include<stdio.h>

int  main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    printf("Before swapping A = %d and B = %d\n", a,b);

    a = b+a;//sobgolo input joghoya a ta obstan kora.
    b = a-b;//a ar new value thaka b ar value minus korla a ar old value powya jay, ja b ta swap kora.
    a = a-b;

    printf("After swapping A = %d and B = %d\n", a,b);
}
