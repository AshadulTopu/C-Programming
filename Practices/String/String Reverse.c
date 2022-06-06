#include<stdio.h>

int main()
{
    ///string reverse with build in function.
    char str[] = "Ashadul Islam";
    printf("%s\n", str);

    strrev(str);
    printf("%s\n", str);
    printf("\n\n");


    ///string reverse 2nd way
    char name1[30] = "Ashadul Islam Topu";
    char name2[30];

    int i=0,len=0,j;
    while(name1[i] != '\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        name2[j] = name1[i];
    }
    printf("%s\n", name1);
    printf("%s\n", name2);


}

