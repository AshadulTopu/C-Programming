#include<stdio.h>
///valo kora bojta hoba.
void input (int *a, int *b)
{
    int p,q;
    printf("Input 1st number: ");
    scanf("%d", &p);
    printf("Input 2nd number: ");
    scanf("%d", &q);

    *a = p;
    *b = q;


}
int main()
{
    int x,y;
    input (&x, &y);
    printf ("x = %d and y = %d", x,y);
}
