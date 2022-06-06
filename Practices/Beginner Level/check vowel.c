#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'A' ||ch == 'e' || ch == 'E' ||ch == 'i' || ch == 'I' ||ch == 'o' || ch == 'O' ||ch == 'u' || ch == 'U'){
        printf("This letter is vowel.\n");
    }
    else{
        printf("This letter is consonat.\n");
    }

}
