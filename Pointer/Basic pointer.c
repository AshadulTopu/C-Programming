#include<stdio.h>

int main ()
{
    ///here take variable with value.
    int x = 10, z = 15;
    double y = 5.256436;

    ///here take pointer variable with pointer value.
    int *b = &x;
    int *a = &y;

    int *c = x;
    int *d = z;

    ///here print normal variable value.
    printf("value of x = %d\n", x);
    printf("value of y = %f\n \n", y);

    ///here print pointer value ny decimal.
    printf("value of x pointer = %d\n", &x);
    printf("value of y pointer = %d\n \n", &y);

    ///here print pointer value by hexadecimal.
    printf("value of x pointer = %p\n", &x);
    printf("value of y pointer = %p\n \n", &y);

    ///here print pointer value by pointer variable.
    printf("value of x pointer = %p\n", b);
    printf("value of y pointer = %p\n \n", a);


    printf("value of x = %p\n", c);
    printf("value of y = %p\n", d);
}
