#include<stdio.h>

int main()

{
    char ch;
    printf("please enter a key: ");
    scanf("%c", &ch);

    if(ch >= 48 && ch <= 57)
    {
        printf("This is a Number: %c\n", ch);
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("Your Input Number is %c . and it's smallest value is %c \n", ch, ch+32);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Your Input Number is %c . and it's capital value is %c \n", ch, ch-32 );
    }
    else
    {
        printf("this is a special character.\n");
    }

    main();

}
