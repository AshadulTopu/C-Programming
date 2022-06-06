#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
   /* scanf("%s", &name); */
    gets(name);

    printf("\n %s", name);
    getch();
}
