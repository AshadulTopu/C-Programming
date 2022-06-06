#include<stdio.h>

int main()
{
    float gpa;

    printf("Input your GPA: ");
    scanf("%f", &gpa);

    if(gpa >= 3.50 && gpa == 5.00)
    {
        printf("Congratulation! You get chance");
    }

    else if (gpa >= 5.00)
    {
        printf("You input wrong GPA. \nPleas input your GPA again.\n");
    }

    else
    {
        printf("Unfortunately You Fail\n");
    }
    main();
}

