#include<stdio.h>

void swap (int *x, int *y)
{
    int z;
    z = *y;
    *y = *x;
    *x = z;
    printf("form function x = %d and y = %d \n", x,y);
     printf("\n");
    printf("form function x = %d and y = %d \n", *x, *y);
     printf("\n");

}

void increment(int *a)
{
    int z = *a;
    z++;
    *a =z;
    printf("increment with pointer = %d\n", *a);
    printf("\n");
}
void incrementwithoutpointer(int a)
{
    int z = a;
    z++;
    a = z;
    printf("increment with out pointer = %d\n", a);
    printf("\n");
}
int main()
{
    int x = 10;
    int y = 25;

    increment(&x);
    incrementwithoutpointer(y);

    printf("Before swap from main function x = %d and y = %d \n", x, y);
    printf("\n");
    swap(&x, &y);

    printf("\n");
    printf("form main function x = %d and y = %d\n \n", x,y);
    printf("from main function address of x = %d and y = %d\n", &x, &y);


    printf("\n");
    x++;
    ///bojlam na.
    printf("before 2nd swap from main function x = %d and y = %d \n",x,y);

    swap(&x, &y);
    printf("from main function x = %d and y = %d \n",x,y);
}
