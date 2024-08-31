#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user
{
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];

};
void takeinput(char ch[50])
{
    fgets(ch,50,stdin);
    ch[strlen(ch) -1] = 0;

}
char generateUsername(char email[50], char username[50])
{
    for(int i=0; i<strlen(email);i++)
    {
        if(email[i] == '@')
            break;
        else username[i] = email[i];
    }
}
void takepassword(char pwd[50])
{
    int i;
    char ch;
    while (1)
    {
        ch = getch();
        if(ch == ENTER || ch == TAB)
        {
            pwd[i] = '\0';
            break;

        }
        else if(ch == BCKSPC)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }else
        {
            pwd[i++] = ch;
            printf("* \b");

        }

    }
}


int main()
{
    system("color 09");
    FILE *fp;
    int opt,usrFound = 0;
    struct user user;
    char password2[50];
    char username[50],pword[50];
    struct user usr;
    printf("\n\t\t\t\t---------WELCOME TO AUTHENTICATION SYSTEM----------\n");
    printf("\n\t\t\t\tPLEASE CHOOSE YOUR OPERATION\n");
    printf("\n\t\t\t\t 1.SIGNUP");
    printf("\n\t\t\t\t 2.LOGIN");
    printf("\n\t\t\t\t 3.EXIT");

    printf("\n\t\t\t\t YOUR CHOICE :\t");
    scanf("%d",&opt);
    fgetc(stdin);
    switch(opt)
    {
        case 1:
            system("cls");
            printf("\n\t\t\t\t ENTER YOUR FULL NAME :\t");
            takeinput(user.fullName);
            printf("\n\t\t\t\t ENTER YOUR EMAIL     :\t");
            takeinput(user.email);
            printf("\n\t\t\t\t ENTER YOUR CONTACT NO:\t");
            takeinput(user.phone);
            printf("\n\t\t\t\t ENTER YOUR PASSWORD  :");
            takepassword(user.password);
            printf("\n\t\t\t\t CONFIRM YOUR PASSWORD:\t");
            takepassword(password2);

            if(!strcmp(user.password,password2))
            {
                generateUsername(user.email,user.username);

                printf("\n\t\t\t\t YOUR USERNAME IS %s ",user.username);
                fp = fopen("user.dat","a+");
                fwrite(&user,sizeof(struct user),1,fp);
                if(fwrite != 0) printf("\n\t\t\t\t  USER REGISTRATION SUCCESS\n\t\t\t\t YOUR USER NAME IS %s",user.username);
                else printf("\n\t\t\t\t SORRY! SOMETHING WENT WRONG");
                fclose(fp);

            }
            else
            {
                printf("\n\t\t\t\t YOUR PASSWORD DONOT MATCHED");
                Beep(750,400);

            }
            break;
        case 2:




            printf("\n\t\t\t\t ENTER YOUR USERNAME :\t");
            takeinput(username);
            printf("\n\t\t\t\t ENTER YOUR PASSWORD :\t");
            takepassword(pword);


            fp = fopen("user.dat","r");
            while(fread(&usr,sizeof(struct user),1,fp))
            {
                if(! strcmp(usr.username,username))
                {
                    if(!strcmp(usr.password,pword))
                    {
                        system("cls");
                        printf("\n\t\t\t\t WELCOME %s",usr.fullName);
                        printf("\n\t\t\t\t |_FULL NAME :\t%s",usr.fullName);
                        printf("\n\t\t\t\t |_EMAIL     :\t%s",usr.email);
                        printf("\n\t\t\t\t |_USERNAME  :\t%s",usr.username);
                        printf("\n\t\t\t\t |_CONTACT NO:\t%s",usr.phone);


                    }
                    else
                    {
                        printf("\n\t\t\t\t INVALID PASSWORD!");
                        Beep(900,500);
                    }
                    usrFound = 1;

                }



            }
            if(!usrFound)
            {
                printf("\n\t\t\t\tUSER IS NOT REGISTERED!");
                Beep(850,450);
            }
            fclose(fp);
            break;
        case 3:
            printf("\n\t\t\t\t THANKS FOR VISIT");
            return 0;




    }
    return 0;
}
