#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t)); /// need explination

    int choosen_number, chance = 5;
    int lucky_number = rand() % 25 + 1;
    bool is_loss = true;

    do{
        printf("Choose a lucky number (%d) : ", chance);
        scanf("%d", &choosen_number);

        if(choosen_number == lucky_number)
        {
            printf("Congratulation! You are Win!!!!");
            is_loss = false;
            break;
        }
        if(choosen_number < lucky_number)
        {
            printf("Your choose number is small\n");
        }
        else{
            printf("Your choose number is big\n");
        }
        chance--;
    }
    while(chance > 0);

    if(is_loss)
    {
        printf("You have loss. Lucky number is %d \n", lucky_number);
    }

}

