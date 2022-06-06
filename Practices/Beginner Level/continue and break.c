#include<stdio.h>

int main()
{
    for(int i =1; i<=20; i++){
        if(i%3==0){
            printf("Before continue %d\n", i);
            continue;
        }
        printf("After continue %d\n", i);
        if(i==10){
            printf("break = %d\n", i);
            break;
        }
    }
    getch();
}
