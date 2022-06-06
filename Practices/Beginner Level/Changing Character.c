#include<stdio.h>

int main()
{
    char letter;

    printf("Enter a character: ");
    scanf("%c", &letter);

    if (letter >= 48 && letter <= 57 )
    {
        printf("This is a Number: %c \n", letter);
    }
    else if (letter >= 65 && letter <= 90)
    {
        printf("This is a Uppercase letter. This letter is %c . This letter smallest letter is %c \n", letter, letter +32);

    }
    else if (letter >= 97 && letter <= 122)
    {
        printf("This is s Lowercase letter. This letter is %c . This letter uppercase letter is %c \n", letter, letter-32);
    }
    else
    {
        printf("This is a special character. \n");
    }
    main();///There has a problem.
}
