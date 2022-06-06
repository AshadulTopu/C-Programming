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

    while(chance > 0)
    {
        printf("Choose a lucky number (%d) : ", chance);
        scanf("%d", &choosen_number);

        if(choosen_number == lucky_number)
        {
            printf("Congratulation! You are Win!!!!");
            is_loss = false;
            break;
        }
        chance--;
    }
    if(is_loss)
    {
        printf("You have loss. Lucky number is %d \n", lucky_number);
    }
}
