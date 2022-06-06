#include<stdio.h>

int main()
{
    ///find string length 1st way.
    char name[] = "Ashadul Islam Topu";
    int len = strlen(name);
    printf("Length = %d\n", len);

    ///find string length 2nd way.
    char nam[] = "Obidul Karim";
    printf("Length = %d\n", strlen(nam));


    ///find string length 3rd way.
    char str[] = "Bangladesh is a small country";
    int count=0, i=0;

    while(str[i] != '\0')
    {

        i++;
        count++;
    }
    printf("Length: %d", count);
    getch();
}
