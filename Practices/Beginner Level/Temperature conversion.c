#include<stdio.h>

int main()
{
    int choice;
    float temp, convertedTemp;
    printf("Temperature conversion menu.\n");
    printf("Enter 1 for Fahrenheit to Celsius \n");
    printf("Enter 2 for Celsius to  Fahrenheit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit Temperature: ");
            scanf("%f", &temp);
            convertedTemp = (temp-32) /1.8;
            printf("The Celsius Temperature is %f", convertedTemp);
            break;
        }
    case 2:
        {
            printf("Enter the Celsius Temperature: ");
            scanf("%f", &temp);
            convertedTemp = (temp*1.8)+32;
            printf("The Fahrenheit Temperature is %f", convertedTemp);
            break;
        }
    default:
        printf("You input wrong number.");
    }
    getch();

}
