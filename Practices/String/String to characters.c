#include<stdio.h>

int main()
{
    char name[] = "Ashadul Islam";

    int i=0;
    while(name[i] != '\0')
    {
        printf("\t %c\n", name[i]);
        i++;
    }
}
