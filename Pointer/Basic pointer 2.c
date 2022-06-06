#include<stdio.h>

int main()
{
    char ch = 'a';
    char *ptr = &ch;

    printf("value of ch = %c\n", ch);

    printf("value of ch pointer = %c\n", *ptr);

    printf("value of ch pointer = %c\n", &ch);

    printf("value of ch pointer = %d\n", &ch);
}
