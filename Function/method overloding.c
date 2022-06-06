#include<stdio.h>
///C dosen't support Method overloading.
int add(int a, int b);
int add(int a, int b, int c);
int add();

int main()
{
    int x = 110, y = 20, z = 50;

    printf("%d \n", add(x,y));
    printf("%d \n", add(x,y,z));
    printf("%d \n", add());
}

int add(int a, int b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

int add()
{
    return 1;
}
