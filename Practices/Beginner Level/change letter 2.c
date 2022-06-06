#include<stdio.h>

int main()
{
    char name[30];
    int i=0;

    printf("Enter a string: ");
    fgets(name, 30, stdin);

    while(name[i])
    {
        if(name[i]>= 'A' && name[i]<= 'Z')
        {
            name[i] += 32;
        }
        i++;
    }
    printf("Output: %s \n", name);

}

