#include<stdio.h>

int main()
{
    char str1[] = "Ashadul Islam";
    char str2[] = "Ashadul islam";
    char str3[] = "Topu";
    char str4[] = "Ashadul Islam";
    int a,b,c,d;

    a = strcmp(str1, str2);
    b = strcmp(str1, str3);
    c = strcmp(str2, str3);
    d = strcmp(str1, str4);

    if(a==0)
    {
        printf("String (str1, str2) are equal\n");
    }
    else if(b==0)
    {
        printf("String (str1, str3) are equal\n");
    }
    else if(c==0)
    {
        printf("String (str2, str3) are equal\n");
    }
    else if(d==0)
    {
        printf("String (str1, str4) are equal\n");
    }
}
