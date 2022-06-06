#include<stdio.h>
#include<conio.h>
#include<windows.h>

struct user{
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
};


void takeInput (char ch[50]){
    fgets(ch,50,stdin);
    ch[strlen(ch) -1] = 0;
}

void generateUserName(char email[50], char userName[50])
{
    ///email should be abc123@gmail.com

    for (int i=0; i<strlen(email); i++)
    {
        if (email[i] = '@')
        {
            break;
        }else{
        userName[i] = email[i];
        }
    }
}


int main()
{
    system("color 0b");
    int opt;
    struct user user;


    printf("\n\t\t\t\t -----------------------Welcome to authentication system-------------------------");
    printf("\nPlease choose your operation.");
    printf("\n1. Sign Up");
    printf("\n2. Log In");
    printf("\n3. Exit");

    printf("\n\nYour choice: \t");
    scanf("%d", &opt);
    fgetc(stdin);


/*
    switch(opt){
    case 1:
        printf("\nEnter your full name: \t");
        takeInput(user.fullName);
        printf("\nEnter your email: \t");
        takeinput(user.email);
        printf("\n Enter your phone number: \t");
        takeInput(user.phone);
        printf("\nEnter your password: \t");
        takeInput(user.password);
    }

*/

    return 0;
}
