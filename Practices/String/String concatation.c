#include<stdio.h>

int main()
{

    ///concat string 1st way.
    char str1[] = "My Name is ";
    char str2[] = "Ashadul Islam Topu";
    strcat(str1, str2);
    printf("\t%s\n", str1);


    ///concat string 2nd way.
    char name1[50] = "I'm from Cumilla, ";
    char name2[] = "Dhaka, Bangladesh";

    int i=0, len=0, j=0;
    while(name1[i] != '\0')
    {
        i++;
        len++;
    }
    while(name2[j] != '\0')
    {
        name1[len+j] = name2[j];
        /*printf("%s\n", name1);*/
        j++;
    }
    printf("%s\n", name1);
}






