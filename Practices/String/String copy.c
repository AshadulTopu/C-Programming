#include <stdio.h>
int main()
{
    char main_str[] = "AShadul Islam Topu";
    char copy_str[30];

    strcpy(copy_str, main_str);
    printf("Main String: %s\n", main_str);
    printf("Copy String: %s\n", copy_str);
    getch();

}
