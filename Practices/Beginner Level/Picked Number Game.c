#include<stdio.h>


int main()
{

const int picked_number = 9;
int given_number;

    printf("Please Choose a Number: ");
    scanf("%d", &given_number);

    if(picked_number == given_number)
    {
        printf("You are win!!!!!!! \n");
    }
    else
    {
        printf("You lose. \n");
    }
    main();

}
