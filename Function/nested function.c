#include<stdio.h>

void function1()
{
    printf("calling from function 1 => %d\n", 10);
    function2();
}
void function2()
{
    printf("calling from function 2 => %d\n" ,110);
    function3();
}
void function3()
{
    printf("calling from function 3 => %d\n", 520);
    function1();
}

int main()
{
    function1();

}
