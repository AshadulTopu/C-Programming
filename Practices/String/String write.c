#include<stdio.h>

int main()
{
    char str[8];

    str[0] = 'A';
    str[1] = 's';
    str[2] = 'h';
    str[3] = 'a';
    str[4] = 'd';
    str[5] = 'u';
    str[6] = 'l';
    str[7] = '\0';

    printf("%s\n", str);

    char name[6] = { 'I', 's', 'l', 'a', 'm', '\0' };
    printf("%s\n", name);

    char nam[] = { 'T', '0', 'p', 'u', '\0'};
    printf("%s\n", nam);


    printf("\n");
    char str_name[] = "Ashadul Islam";
    printf("%s", str_name);

    getch();
}
