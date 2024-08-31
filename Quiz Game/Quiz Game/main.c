#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 9f");

    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;



    char cont='n';
    char cn ='y';

    while(cont == 'n')
    {



    printf("\n\t WELCOME TO THE GAME\n\n");
    printf("\n\t> PRESS 7 TO START THE GAME\n");
    printf("\n\t> PRESS 0 TO QUIT THE GAME \n");

    scanf("%d", &i);

    if(i==7)
    {
        printf("\n\t THE GAME HAS STARTED\n\n");

    }
    else if(i==0)
    {
        printf("\n\t THE GAME HAS ENDED\n\n");
    }
    else
    {
        printf("\n\tINVALID\n\n");

    }
   // while(cn=='y'){

    if(i==7)
    {


        printf("\n\t1) WHICH ONE IS THE FIRST SEARCH ENGINE IN INTERNET?\n\n");
        printf("\t1) GOOGLE\n");
        printf("\t2) ARCHI\n");

        printf("\t3) WAIS\n");
        printf("\t4) ALTAVISTA\n");
        printf("\n\t ENTER YOU ANSWER :"," ");
        scanf("%d",&ans1);

        if(ans1==2)
        {
            printf("\n\tYOUR ANSWER CORRECT\n");
            point1 =5;
            printf("\n\t YOU HAVE SCORED %d POINT\n",point1);
        }
        else
        {
            printf("\n\t WRONG ANSWER\n");
            point01 = 0;
            printf("\n\t YOU HAVE SCORED %d POINT", point01);
        }

        printf("\n\t2) WHICH ONE IS THE FIRST BROWSER INVENTED IN 1990?\n\n");
        printf("\t1) INTERNET EXPLORER\n");
        printf("\t2) MOZILA\n");
        printf("\t3) MOSAIC\n");
        printf("\t4) NEXUS\n");

        printf("\n\t ENTER YOUR ANSWER\n");

        scanf("%d",&ans2);

        if(ans2==4)
        {
            printf("\n\t YOUR ENTERED CORRECT ANSWER\n");
            point2 = 10;
            printf("\n\t YOU HAVE SCORED %d POINT", point2);
        }
        else
        {
            printf("\n\tYOUR ENTERED WRONG ANSWER\n");
            point02 = 0;
            printf("\t YOU HAVE SCORED %d POINT", point02);
            printf("\n\n");
        }


        printf("\n\t3) FIRST COMPUTER VIRUS IS KNOWN AS?\n\n");
        printf("\t1) RABBIT\n");
        printf("\t2) CREEPER VIRUS\n");
        printf("\t3) ELK CLONER\n");
        printf("\t4) SCA VIRUS\n");

        printf("\n\t ENTER YOUR ANSWER :");
        scanf("%d",&ans3);


        if(ans3==2)
        {
            printf("\n\tCORRECT ANSWER\n");
            point3 = 5;
            printf("\n\tYOU HAVE SCORED %d POINT\n",point3);
        }
        else
        {
            printf("\n\tWRONG ANSWER\n");
            point03 = 0;
            printf("\n\tYOU HAVE SCORED %d POINT\n",point03);
        }

        printf("\n\t4) FIREWALL IN COMPUTER IS USED FOR ?\n\n");
        printf("\t1) SECURITY\n");
        printf("\t2) DATA TRANSMISSION\n");
        printf("\t3) MONITORING\n");
        printf("\t4) AUTHENTHICATION\n");

        printf("\n\tENTER YOUR ANSWER : ");
        scanf("%d",&ans4);


        if(ans4==1)
        {
            printf("\n\tCORRECT ANSWER");
            point4 = 5;
            printf("\n\t YOU HAVE SCORED %d POINT \n", point4);
            printf("\n\n");
        }
        else
        {
            printf("\n\tWRONG ANSWER\n");
            point04 = 0;
            printf("\n\t YOU HAVE SCORED %d POINT\n",point04);
            printf("\n\n");

        }


        printf("\n\t5) WHICH OF THE FOLLOWING Is NOT A DATABASE MANAGMENT SOFTWARE?\n\n");
        printf("\t1) MYQL\n");
        printf("\t2) ORACLE\n");
        printf("\t3) COBAL\n");
        printf("\t4) SYBASE\n");


        printf("\n\tENTER YOUR ANSWER :");
        scanf("%d", &ans5);

        if(ans5==3)
        {
            printf("\n\tCORRECT ANSWER");
        point5 = 5;
        printf("\n\tYOU HAVE SCORED %d POINT",point5);
        printf("\n\n");

        }
        else
        {
            printf("\n\tWRONG ANSWER\n");
            point05 = 0;
            printf("\n\tYOU HAVE SCORED %d POINT\n",point05);
        }

    }
/*
    printf("\tDO YOU WANT TO CONTINUE [y/n]\n");
    scanf("%s",&cn);

    if(cont=='y')
    {
        printf("\tTHANKS FOR CONTINUING :)\n",&cont);

    }*/

   // }

    printf("\tARE YOU CONFIRM TO EXIT [y/n]\n");
    scanf("%s",&cont);
    if(cont=='y')
    {
        printf("\tBYE :( \n");
        printf("\n\n");

    }

    else
        {
            printf("\tTHANKS FOR CONTINUING :)");
            printf("\n\n");

        }




    }


    return 0;
}
