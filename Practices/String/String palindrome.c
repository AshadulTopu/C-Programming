#include<stdio.h>

int main()
{
    ///string reverse
    char name1[30] = "a";
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

    int tamp = strcmp (name1, name2);
    if(tamp==0)
    {
        printf("String is palindrome.\n");
    }
    else
    {
        printf("String is not palindrome.\n");
    }
    getch();
}


