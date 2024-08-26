#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system ("color 9f");

    int A=0,B=0,no_result=0,total_vote,i,choice;

    printf("\t\t\t        ________________________________________\n");
    printf("\t\t\t\t\|                                      |\n");
    printf("\t\t\t\t\|                                      |\n");
    printf("\t\t\t\t\|                  MINI                |\n");
    printf("\t\t\t\t\|             VOTING SYSTEM            |\n");
    printf("\t\t\t\t\|                                      |\n");
    printf("\t\t\t\t\|                                      |\n");

    printf("\t\t\t\t|______________________________________|\n");
    printf("\n \n");

    //printf("\t\t\t\t________________________________________\n");
    //printf("\t\t\t\t|                                      |\n");
    printf("\t\t\t\t     HOW MANY PEOPLES TO VOTE : \n");
   // printf("\t\t\t\t|                                      |\n");
    //printf("\t\t\t\t|______________________________________|\n");
    scanf("%d",&total_vote);
    for(i=1; i<=total_vote;i ++)
    {
        printf("\t\t\t\t________________________________________\n");
        printf("\t\t\t\t|                                      |\n");
        printf("\t\t\t\t|    WELCOME TO THE VOTTING SYSTEM     |\n");
        printf("\t\t\t\t|                                      |\n");
        printf("\t\t\t\t|         ENTER 1 TO VOTE FOR A        |\n");
        printf("\t\t\t\t|         ENTER 2 TO VOTE FOR B        |\n");
        printf("\t\t\t\t|       ENTER 3 TO VOTE FOR NONE       |\n");
        printf("\t\t\t\t|______________________________________|\n");
        scanf("%d",&choice);

        if(choice == 1)
        {
            A++;
        }else if(choice ==2)
        {
            B++;
        }else if(choice ==3)
        {
            no_result++;
        }
        else
        {
            printf("\t\t\t\t________________________________________\n");
            printf("\t\t\t\t|                                      |\n");
            printf("\t\t\t\t|                                      |\n");

            printf("\t\t\t\t|             INVAlID VOTE             |\n");

            printf("\t\t\t\t|                                      |\n");
            printf("\t\t\t\t|                                      |\n");
            printf("\t\t\t\t|______________________________________|\n");
            printf("\n \n");
        }
    }
    printf("\t\t\t\t________________________________________\n");
    printf("\t\t\t\t|                                      |\n");

    printf("\t\t\t\t|         !RESULT OF THE VOTE!         |\n");
    printf("\t\t\t\t|                                      |\n");
   // printf("\t\t\t\t|                                      |\n");
    printf("\t\t\t\t|______________________________________|\n");
    printf("\t\t\t\t|                                      |\n");
    printf("\t\t\t\t|            A GOT %d vote              |\n",A);
    printf("\t\t\t\t|            B GOT %d vote              |\n",B);
    printf("\t\t\t\t|          NEUTRAL GOT %d vote          |\n",no_result);

    if(A>B &&A>no_result)

    {
        printf("\t\t\t\t|_________***A WIN THE VOTE***_________|\n");
    }
    else if(B>A && B>no_result)
    {
        printf("\t\t\t\t|_________***B WIN THE VOTE***_________|\n");
    }else if(no_result>A && no_result>B)
    {
        printf("\t\t\t\t|  NEUTRAL VOTE GOT THE MAJORITY VOTE  |\n");

    }else
    {
        printf("\t\t\t\t|______THE VOTE RESULT IS TIED_________|\n");
    }




    return 0;
}
